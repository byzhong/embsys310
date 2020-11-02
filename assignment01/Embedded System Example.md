# Embedded System Example: Washing Machine

**How it works:** The automated washing machine includes a system controller, which controls the activation and speed of the machine's spinning motor and water pump. The controller also receives input data from various sensors, including water level, temperature, load size, door lock, and user input of wash preferences. The controller may also dictate user notifications, such as display and beeping indicators.

**Challenges:**
* Throughput of data: sending data to motors, display, water pump; receiving data from several sensors simultaneously.
* Response: needs fast response to real-time sensor data to prevent overheating, unstable spin-speeds, overflowing water levels, jammed motor.
* Reliability: ideally consumer-unit should not require any maintenance for years, including software updates.
* Cost: must be as low-cost as possible yet reliable to reamin profitable and competitive
* Power consumption: remain eco-friendly
