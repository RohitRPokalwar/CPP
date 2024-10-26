#include <matplotlibcpp.h>
#include <cmath>
#include <vector>

namespace plt = matplotlibcpp;

// Function to generate sine wave with a phase shift
std::vector<double> generate_wave(double amplitude, double frequency, double phase, double time_duration, double time_step) {
    std::vector<double> wave;
    for (double t = 0; t < time_duration; t += time_step) {
        wave.push_back(amplitude * sin(2 * M_PI * frequency * t + phase));
    }
    return wave;
}

int main() {
    // Define parameters
    double Vm = 10;        // Voltage amplitude
    double Im = 5;         // Current amplitude
    double frequency = 50; // Frequency in Hz
    double phase_RL = -M_PI / 4;  // Phase shift for R-L circuit (current lags voltage)
    double phase_RC = M_PI / 4;   // Phase shift for R-C circuit (current leads voltage)
    double time_duration = 0.04;  // 40ms duration (assuming 50 Hz)
    double time_step = 0.0001;    // Time step for plot

    // Time vector for x-axis
    std::vector<double> time;
    for (double t = 0; t < time_duration; t += time_step) {
        time.push_back(t);
    }

    // Generate voltage waveform (common for both R-L and R-C)
    std::vector<double> voltage_wave = generate_wave(Vm, frequency, 0, time_duration, time_step);

    // Generate current waveforms for R-L and R-C circuits
    std::vector<double> current_wave_RL = generate_wave(Im, frequency, phase_RL, time_duration, time_step);
    std::vector<double> current_wave_RC = generate_wave(Im, frequency, phase_RC, time_duration, time_step);

    // Generate power waveforms (voltage * current for each time point)
    std::vector<double> power_wave_RL, power_wave_RC;
    for (size_t i = 0; i < time.size(); ++i) {
        power_wave_RL.push_back(voltage_wave[i] * current_wave_RL[i]);
        power_wave_RC.push_back(voltage_wave[i] * current_wave_RC[i]);
    }

    // Plot Voltage and Current for R-L circuit
    plt::figure();
    plt::subplot(3, 1, 1);
    plt::title("R-L Series Circuit");
    plt::plot(time, voltage_wave, {{"label", "Voltage (V)"}});
    plt::plot(time, current_wave_RL, {{"label", "Current (I)"}});
    plt::ylabel("Voltage/Current");
    plt::legend();

    // Plot Power for R-L circuit
    plt::subplot(3, 1, 2);
    plt::plot(time, power_wave_RL, {{"label", "Power (P)"}});
    plt::ylabel("Power");
    plt::legend();

    // Plot Voltage and Current for R-C circuit
    plt::figure();
    plt::subplot(3, 1, 1);
    plt::title("R-C Series Circuit");
    plt::plot(time, voltage_wave, {{"label", "Voltage (V)"}});
    plt::plot(time, current_wave_RC, {{"label", "Current (I)"}});
    plt::ylabel("Voltage/Current");
    plt::legend();

    // Plot Power for R-C circuit
    plt::subplot(3, 1, 2);
    plt::plot(time, power_wave_RC, {{"label", "Power (P)"}});
    plt::ylabel("Power");
    plt::legend();

    // Show plots
    plt::show();
}
