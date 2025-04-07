from math import sin, radians

sine_table = {}
for angle in range(0, 91, 10):
    radians_val = radians(angle)
    sin_val = sin(radians_val)
    rounded = round(sin_val, 5)
    sine_table[angle] = rounded
print(sine_table)

print("---------------------------------------------------------------")
angles2 = range(0, 91, 10)
sine_table2 = {angle: round(sin(radians(angle)), 5) for angle in angles2}
print(sine_table2)
