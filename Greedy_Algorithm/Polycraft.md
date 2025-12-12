Problem Simplified (খুব সহজভাবে)

Polycarp-এর কাছে আছে:
- a sticks
- b diamonds

তিনটি বিষয় মনে রাখো:
- Shovel বানাতে লাগে → 2 sticks + 1 diamond → 1 dollar
- Sword বানাতে লাগে → 1 stick + 2 diamonds → 1 dollar
- প্রশ্ন:
- Polycarp কতটা Dollar কামাতে পারে যদি সে সবচেয়ে ভালোভাবে সব resource ব্যবহার করে?

⭐ Step 1: Tools কি বানানো যায়?

ধরো:

a = 5 sticks

b = 3 diamonds

Shovel বানাতে গেলে:

2 sticks + 1 diamond লাগবে

5 sticks / 2 = 2 (full shovels)

b = 3 → 3 diamonds আছে → Shovels max = 2

Sword বানাতে গেলে:

1 stick + 2 diamonds লাগবে

a = 5 → 5 sticks

b = 3 → 3/2 = 1 (full sword)

⭐ Step 2: কীভাবে সর্বোচ্চ dollar পাবো?

Greedy idea:

বড় tool / বেশি sticks use করা tool আগে বানাও

এরপর remaining resource দিয়ে অন্য tool বানাও

যেমন:

আগে Shovel বানাই → 2 shovels → remaining sticks = 1, diamonds = 1

এখন Sword বানানো সম্ভব?

1 stick + 2 diamonds → diamonds নেই → can't craft

তাই total dollar = 2

⭐ Step 3: Dry Run Example

a = 7, b = 4

Step 1: Shovels first

Max Shovels = min(7/2, 4) = min(3, 4) = 3

Remaining: sticks = 7-6=1, diamonds = 4-3=1

Step 2: Swords now

Max Swords = min(1, 1/2) = 0

Total dollar = 3 + 0 = 3

⭐ Step 4: General Rule

Shovels max = min(a/2, b)

Remaining sticks & diamonds → Swords max = min(a_remaining, b_remaining/2)

Total dollar = Shovels + Swords

⭐ Summary

Vague problem wording: “sticks + diamonds”

Solution: Greedy approach → tool বানাও যেটা বেশি resource use করে আগে, তারপর অন্যটা।

Dollar = total tools crafted