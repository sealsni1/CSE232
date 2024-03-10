#include <iostream>
#include <algorithm>

double Centrifuge (int & time, int & ore, double * const u_238) {
  int const & time_per_cycle = 12;
  int const & ore_per_cycle = 10;
  double const & u_238_per_cycle = .993;
  double const & u_235_per_cycle = .007;
  int possible_cycles_given_time = time / time_per_cycle;
  int possible_cycles_given_ore = ore / ore_per_cycle;
  int cycles = std::min(possible_cycles_given_time, possible_cycles_given_ore);
  time -= cycles * time_per_cycle;
  ore -= cycles * ore_per_cycle;
  *u_238 += cycles * u_238_per_cycle;
  return cycles * u_235_per_cycle;
}

int main() {
    int time = 900;
    int ore = 45;
    double u_238 = 0;
    double u_235 = Centrifuge(time, ore, &u_238);

    // Print the results for verification
    std::cout << "Remaining time: " << time << std::endl;
    std::cout << "Remaining ore: " << ore << std::endl;
    std::cout << "Final U238: " << u_238 << std::endl;
    std::cout << "Generated U235: " << u_235 << std::endl;

    return 0;
}