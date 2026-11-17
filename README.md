# Competitive Programming Solutions

Personal solutions archive for [Codeforces](https://codeforces.com/profile/DARTHNEMESIS) (handle **DARTHNEMESIS**), plus a few CSES and HackerRank problems.

This repository was reorganized from a flat folder of mixed filenames into a consistent layout so problems are easy to find and add.

## Layout

```
.
├── codeforces/<contestId>/<index>_<slug>.<ext>
├── cses/<slug>.cpp
├── hackerrank/
├── templates/          # reusable snippets and starter templates
├── misc/               # unfinished or unidentified files (see below)
│   └── tests/          # leftover sample / scratch input
└── README.md
```

Notes (writeups, idea dumps) can go in `notes/` if you add them later.

## Naming convention

### Codeforces

```
codeforces/<contestId>/<index>_<slug>.<ext>
```

- `<contestId>` and `<index>` are the official Codeforces IDs (for example `1807` and `D`).
- `<slug>` is the official problem name in lowercase, with spaces and punctuation turned into underscores.
- The extension stays whatever you submitted with (`.cpp`, `.c`, `.py`).
- Link: `https://codeforces.com/problemset/problem/<contestId>/<index>`

Examples:

| File | Problem |
| --- | --- |
| `codeforces/4/A_watermelon.cpp` | [4A Watermelon](https://codeforces.com/problemset/problem/4/A) |
| `codeforces/1807/D_odd_queries.cpp` | [1807D Odd Queries](https://codeforces.com/problemset/problem/1807/D) |
| `codeforces/2038/N_fixing_the_expression.cpp` | [2038N Fixing the Expression](https://codeforces.com/problemset/problem/2038/N) |

If two solutions exist for the same problem, the second file gets an `_alt` suffix. An empty placeholder keeps an `_empty` suffix so nothing is deleted.

### Other platforms

- CSES: `cses/<slug>.cpp` — link the problem in a comment or in the table below.
- HackerRank: `hackerrank/<challenge>.<ext>`
- New platforms (LeetCode, CodeChef, AtCoder, …): add a top-level folder named after the platform and use that site’s problem id in the filename.

### Adding a new Codeforces solution

1. Create the contest folder if it does not exist: `mkdir -p codeforces/2137`
2. Save the solution as `codeforces/2137/A_collatz_conjecture.cpp`
3. Prefer the official name from the problem statement so the index in this README stays consistent.

## Codeforces solutions

227 distinct problems, 230 files, across 191 contests.

| ID | Problem | Rating | File |
| --- | --- | ---: | --- |
| 1A | [Theatre Square](https://codeforces.com/problemset/problem/1/A) | 1000 | [`codeforces/1/A_theatre_square.cpp`](codeforces/1/A_theatre_square.cpp) |
| 4A | [Watermelon](https://codeforces.com/problemset/problem/4/A) | 800 | [`codeforces/4/A_watermelon.cpp`](codeforces/4/A_watermelon.cpp) |
| 41A | [Translation](https://codeforces.com/problemset/problem/41/A) | 800 | [`codeforces/41/A_translation.cpp`](codeforces/41/A_translation.cpp) |
| 50A | [Domino piling](https://codeforces.com/problemset/problem/50/A) | 800 | [`codeforces/50/A_domino_piling.cpp`](codeforces/50/A_domino_piling.cpp) |
| 59A | [Word](https://codeforces.com/problemset/problem/59/A) | 800 | [`codeforces/59/A_word.cpp`](codeforces/59/A_word.cpp) |
| 61A | [Ultra-Fast Mathematician](https://codeforces.com/problemset/problem/61/A) | 800 | [`codeforces/61/A_ultra_fast_mathematician.cpp`](codeforces/61/A_ultra_fast_mathematician.cpp) |
| 69A | [Young Physicist](https://codeforces.com/problemset/problem/69/A) | 1000 | [`codeforces/69/A_young_physicist.cpp`](codeforces/69/A_young_physicist.cpp) |
| 71A | [Way Too Long Words](https://codeforces.com/problemset/problem/71/A) | 800 | [`codeforces/71/A_way_too_long_words.cpp`](codeforces/71/A_way_too_long_words.cpp) |
| 110A | [Nearly Lucky Number](https://codeforces.com/problemset/problem/110/A) | 800 | [`codeforces/110/A_nearly_lucky_number.cpp`](codeforces/110/A_nearly_lucky_number.cpp) |
| 112A | [Petya and Strings](https://codeforces.com/problemset/problem/112/A) | 800 | [`codeforces/112/A_petya_and_strings.cpp`](codeforces/112/A_petya_and_strings.cpp) |
| 116A | [Tram](https://codeforces.com/problemset/problem/116/A) | 800 | [`codeforces/116/A_tram.cpp`](codeforces/116/A_tram.cpp) |
| 118A | [String Task](https://codeforces.com/problemset/problem/118/A) | 1000 | [`codeforces/118/A_string_task.cpp`](codeforces/118/A_string_task.cpp) |
| 133A | [HQ9+](https://codeforces.com/problemset/problem/133/A) | 900 | [`codeforces/133/A_hq9plus.cpp`](codeforces/133/A_hq9plus.cpp) |
| 136A | [Presents](https://codeforces.com/problemset/problem/136/A) | 800 | [`codeforces/136/A_presents.cpp`](codeforces/136/A_presents.cpp) |
| 144A | [Arrival of the General](https://codeforces.com/problemset/problem/144/A) | 800 | [`codeforces/144/A_arrival_of_the_general.cpp`](codeforces/144/A_arrival_of_the_general.cpp) |
| 155A | [I_love_\%username\%](https://codeforces.com/problemset/problem/155/A) | 800 | [`codeforces/155/A_i_love_username.cpp`](codeforces/155/A_i_love_username.cpp) |
| 160A | [Twins](https://codeforces.com/problemset/problem/160/A) | 900 | [`codeforces/160/A_twins.cpp`](codeforces/160/A_twins.cpp) |
| 200B | [Drinks](https://codeforces.com/problemset/problem/200/B) | 800 | [`codeforces/200/B_drinks.cpp`](codeforces/200/B_drinks.cpp) |
| 208A | [Dubstep](https://codeforces.com/problemset/problem/208/A) | 900 | [`codeforces/208/A_dubstep.cpp`](codeforces/208/A_dubstep.cpp) |
| 228A | [Is your horseshoe on the other hoof?](https://codeforces.com/problemset/problem/228/A) | 800 | [`codeforces/228/A_is_your_horseshoe_on_the_other_hoof.cpp`](codeforces/228/A_is_your_horseshoe_on_the_other_hoof.cpp) |
| 231A | [Team](https://codeforces.com/problemset/problem/231/A) | 800 | [`codeforces/231/A_team.cpp`](codeforces/231/A_team.cpp) |
| 236A | [Boy or Girl](https://codeforces.com/problemset/problem/236/A) | 800 | [`codeforces/236/A_boy_or_girl.cpp`](codeforces/236/A_boy_or_girl.cpp) |
| 263A | [Beautiful Matrix](https://codeforces.com/problemset/problem/263/A) | 800 | [`codeforces/263/A_beautiful_matrix.cpp`](codeforces/263/A_beautiful_matrix.cpp) |
| 266A | [Stones on the Table](https://codeforces.com/problemset/problem/266/A) | 800 | [`codeforces/266/A_stones_on_the_table.cpp`](codeforces/266/A_stones_on_the_table.cpp) |
| 271A | [Beautiful Year](https://codeforces.com/problemset/problem/271/A) | 800 | [`codeforces/271/A_beautiful_year.cpp`](codeforces/271/A_beautiful_year.cpp) |
| 281A | [Word Capitalization](https://codeforces.com/problemset/problem/281/A) | 800 | [`codeforces/281/A_word_capitalization.cpp`](codeforces/281/A_word_capitalization.cpp) |
| 282A | [Bit++](https://codeforces.com/problemset/problem/282/A) | 800 | [`codeforces/282/A_bitplusplus.cpp`](codeforces/282/A_bitplusplus.cpp) |
| 318A | [Even Odds](https://codeforces.com/problemset/problem/318/A) | 900 | [`codeforces/318/A_even_odds.cpp`](codeforces/318/A_even_odds.cpp) |
| 339A | [Helpful Maths](https://codeforces.com/problemset/problem/339/A) | 800 | [`codeforces/339/A_helpful_maths.cpp`](codeforces/339/A_helpful_maths.cpp) |
| 344A | [Magnets](https://codeforces.com/problemset/problem/344/A) | 800 | [`codeforces/344/A_magnets.cpp`](codeforces/344/A_magnets.cpp) |
| 381A | [Sereja and Dima](https://codeforces.com/problemset/problem/381/A) | 800 | [`codeforces/381/A_sereja_and_dima.cpp`](codeforces/381/A_sereja_and_dima.cpp) |
| 405A | [Gravity Flip](https://codeforces.com/problemset/problem/405/A) | 900 | [`codeforces/405/A_gravity_flip.cpp`](codeforces/405/A_gravity_flip.cpp) |
| 427A | [Police Recruits](https://codeforces.com/problemset/problem/427/A) | 800 | [`codeforces/427/A_police_recruits.cpp`](codeforces/427/A_police_recruits.cpp) |
| 451A | [Game With Sticks](https://codeforces.com/problemset/problem/451/A) | 900 | [`codeforces/451/A_game_with_sticks.cpp`](codeforces/451/A_game_with_sticks.cpp) |
| 467A | [George and Accommodation](https://codeforces.com/problemset/problem/467/A) | 800 | [`codeforces/467/A_george_and_accommodation.cpp`](codeforces/467/A_george_and_accommodation.cpp) |
| 469A | [I Wanna Be the Guy](https://codeforces.com/problemset/problem/469/A) | 800 | [`codeforces/469/A_i_wanna_be_the_guy.cpp`](codeforces/469/A_i_wanna_be_the_guy.cpp) |
| 479A | [Expression](https://codeforces.com/problemset/problem/479/A) | 1000 | [`codeforces/479/A_expression.cpp`](codeforces/479/A_expression.cpp) |
| 486A | [Calculating Function](https://codeforces.com/problemset/problem/486/A) | 800 | [`codeforces/486/A_calculating_function.cpp`](codeforces/486/A_calculating_function.cpp) |
| 510A | [Fox And Snake](https://codeforces.com/problemset/problem/510/A) | 800 | [`codeforces/510/A_fox_and_snake.cpp`](codeforces/510/A_fox_and_snake.cpp) |
| 546A | [Soldier and Bananas](https://codeforces.com/problemset/problem/546/A) | 800 | [`codeforces/546/A_soldier_and_bananas.cpp`](codeforces/546/A_soldier_and_bananas.cpp) |
| 581A | [Vasya the Hipster](https://codeforces.com/problemset/problem/581/A) | 800 | [`codeforces/581/A_vasya_the_hipster.cpp`](codeforces/581/A_vasya_the_hipster.cpp) |
| 617A | [Elephant](https://codeforces.com/problemset/problem/617/A) | 800 | [`codeforces/617/A_elephant.cpp`](codeforces/617/A_elephant.cpp) |
| 677A | [Vanya and Fence](https://codeforces.com/problemset/problem/677/A) | 800 | [`codeforces/677/A_vanya_and_fence.cpp`](codeforces/677/A_vanya_and_fence.cpp) |
| 702A | [Maximum Increase](https://codeforces.com/problemset/problem/702/A) | 800 | [`codeforces/702/A_maximum_increase.cpp`](codeforces/702/A_maximum_increase.cpp) |
| 705A | [Hulk](https://codeforces.com/problemset/problem/705/A) | 800 | [`codeforces/705/A_hulk.cpp`](codeforces/705/A_hulk.cpp) |
| 707A | [Brain's Photos](https://codeforces.com/problemset/problem/707/A) | 800 | [`codeforces/707/A_brains_photos.cpp`](codeforces/707/A_brains_photos.cpp) |
| 707A | [Brain's Photos](https://codeforces.com/problemset/problem/707/A) | 800 | [`codeforces/707/A_brains_photos_alt.cpp`](codeforces/707/A_brains_photos_alt.cpp) (alternate) |
| 708A | [Letters Cyclic Shift](https://codeforces.com/problemset/problem/708/A) | 1200 | [`codeforces/708/A_letters_cyclic_shift.cpp`](codeforces/708/A_letters_cyclic_shift.cpp) |
| 734A | [Anton and Danik](https://codeforces.com/problemset/problem/734/A) | 800 | [`codeforces/734/A_anton_and_danik.cpp`](codeforces/734/A_anton_and_danik.cpp) |
| 791A | [Bear and Big Brother](https://codeforces.com/problemset/problem/791/A) | 800 | [`codeforces/791/A_bear_and_big_brother.cpp`](codeforces/791/A_bear_and_big_brother.cpp) |
| 977A | [Wrong Subtraction](https://codeforces.com/problemset/problem/977/A) | 800 | [`codeforces/977/A_wrong_subtraction.cpp`](codeforces/977/A_wrong_subtraction.cpp) |
| 1030A | [In Search of an Easy Problem](https://codeforces.com/problemset/problem/1030/A) | 800 | [`codeforces/1030/A_in_search_of_an_easy_problem.cpp`](codeforces/1030/A_in_search_of_an_easy_problem.cpp) |
| 1154A | [Restoring Three Numbers](https://codeforces.com/problemset/problem/1154/A) | 800 | [`codeforces/1154/A_restoring_three_numbers.cpp`](codeforces/1154/A_restoring_three_numbers.cpp) |
| 1165C | [Good String](https://codeforces.com/problemset/problem/1165/C) | 1300 | [`codeforces/1165/C_good_string.cpp`](codeforces/1165/C_good_string.cpp) |
| 1328A | [Divisibility Problem](https://codeforces.com/problemset/problem/1328/A) | 800 | [`codeforces/1328/A_divisibility_problem.cpp`](codeforces/1328/A_divisibility_problem.cpp) |
| 1335A | [Candies and Two Sisters](https://codeforces.com/problemset/problem/1335/A) | 800 | [`codeforces/1335/A_candies_and_two_sisters.cpp`](codeforces/1335/A_candies_and_two_sisters.cpp) |
| 1352A | [Sum of Round Numbers](https://codeforces.com/problemset/problem/1352/A) | 800 | [`codeforces/1352/A_sum_of_round_numbers.cpp`](codeforces/1352/A_sum_of_round_numbers.cpp) |
| 1374A | [Required Remainder](https://codeforces.com/problemset/problem/1374/A) | 800 | [`codeforces/1374/A_required_remainder.cpp`](codeforces/1374/A_required_remainder.cpp) |
| 1374B | [Multiply by 2, divide by 6](https://codeforces.com/problemset/problem/1374/B) | 900 | [`codeforces/1374/B_multiply_by_2_divide_by_6.cpp`](codeforces/1374/B_multiply_by_2_divide_by_6.cpp) |
| 1380A | [Three Indices](https://codeforces.com/problemset/problem/1380/A) | 900 | [`codeforces/1380/A_three_indices.cpp`](codeforces/1380/A_three_indices.cpp) |
| 1399A | [Remove Smallest](https://codeforces.com/problemset/problem/1399/A) | 800 | [`codeforces/1399/A_remove_smallest.cpp`](codeforces/1399/A_remove_smallest.cpp) |
| 1474B | [Different Divisors](https://codeforces.com/problemset/problem/1474/B) | 1000 | [`codeforces/1474/B_different_divisors.cpp`](codeforces/1474/B_different_divisors.cpp) |
| 1475A | [Odd Divisor](https://codeforces.com/problemset/problem/1475/A) | 900 | [`codeforces/1475/A_odd_divisor.cpp`](codeforces/1475/A_odd_divisor.cpp) |
| 1505A | [Is it rated - 2](https://codeforces.com/problemset/problem/1505/A) | 900 | [`codeforces/1505/A_is_it_rated_2.cpp`](codeforces/1505/A_is_it_rated_2.cpp) |
| 1512A | [Spy Detected!](https://codeforces.com/problemset/problem/1512/A) | 800 | [`codeforces/1512/A_spy_detected.cpp`](codeforces/1512/A_spy_detected.cpp) |
| 1543A | [Exciting Bets](https://codeforces.com/problemset/problem/1543/A) | 900 | [`codeforces/1543/A_exciting_bets.cpp`](codeforces/1543/A_exciting_bets.cpp) |
| 1624B | [Make AP](https://codeforces.com/problemset/problem/1624/B) | 900 | [`codeforces/1624/B_make_ap.cpp`](codeforces/1624/B_make_ap.cpp) |
| 1669A | [Division?](https://codeforces.com/problemset/problem/1669/A) | 800 | [`codeforces/1669/A_division.cpp`](codeforces/1669/A_division.cpp) |
| 1676A | [Lucky?](https://codeforces.com/problemset/problem/1676/A) | 800 | [`codeforces/1676/A_lucky.cpp`](codeforces/1676/A_lucky.cpp) |
| 1679A | [AvtoBus](https://codeforces.com/problemset/problem/1679/A) | 900 | [`codeforces/1679/A_avtobus.cpp`](codeforces/1679/A_avtobus.cpp) |
| 1692A | [Marathon](https://codeforces.com/problemset/problem/1692/A) | 800 | [`codeforces/1692/A_marathon.cpp`](codeforces/1692/A_marathon.cpp) |
| 1722A | [Spell Check](https://codeforces.com/problemset/problem/1722/A) | 800 | [`codeforces/1722/A_spell_check.cpp`](codeforces/1722/A_spell_check.cpp) |
| 1722B | [Colourblindness](https://codeforces.com/problemset/problem/1722/B) | 800 | [`codeforces/1722/B_colourblindness.cpp`](codeforces/1722/B_colourblindness.cpp) |
| 1742A | [Sum](https://codeforces.com/problemset/problem/1742/A) | 800 | [`codeforces/1742/A_sum.cpp`](codeforces/1742/A_sum.cpp) |
| 1760C | [Advantage](https://codeforces.com/problemset/problem/1760/C) | 800 | [`codeforces/1760/C_advantage.cpp`](codeforces/1760/C_advantage.cpp) |
| 1761A | [Two Permutations](https://codeforces.com/problemset/problem/1761/A) | 800 | [`codeforces/1761/A_two_permutations.cpp`](codeforces/1761/A_two_permutations.cpp) |
| 1766A | [Extremely Round](https://codeforces.com/problemset/problem/1766/A) | 800 | [`codeforces/1766/A_extremely_round.cpp`](codeforces/1766/A_extremely_round.cpp) |
| 1777A | [Everybody Likes Good Arrays!](https://codeforces.com/problemset/problem/1777/A) | 800 | [`codeforces/1777/A_everybody_likes_good_arrays.cpp`](codeforces/1777/A_everybody_likes_good_arrays.cpp) |
| 1783A | [Make it Beautiful](https://codeforces.com/problemset/problem/1783/A) | 800 | [`codeforces/1783/A_make_it_beautiful.cpp`](codeforces/1783/A_make_it_beautiful.cpp) |
| 1788A | [One and Two](https://codeforces.com/problemset/problem/1788/A) | 800 | [`codeforces/1788/A_one_and_two.cpp`](codeforces/1788/A_one_and_two.cpp) |
| 1789A | [Serval and Mocha's Array](https://codeforces.com/problemset/problem/1789/A) | 800 | [`codeforces/1789/A_serval_and_mochas_array.cpp`](codeforces/1789/A_serval_and_mochas_array.cpp) |
| 1791C | [Prepend and Append](https://codeforces.com/problemset/problem/1791/C) | 800 | [`codeforces/1791/C_prepend_and_append.cpp`](codeforces/1791/C_prepend_and_append.cpp) |
| 1805A | [We Need the Zero](https://codeforces.com/problemset/problem/1805/A) | 800 | [`codeforces/1805/A_we_need_the_zero.cpp`](codeforces/1805/A_we_need_the_zero.cpp) |
| 1806A | [Walking Master](https://codeforces.com/problemset/problem/1806/A) | 800 | [`codeforces/1806/A_walking_master.cpp`](codeforces/1806/A_walking_master.cpp) |
| 1807A | [Plus or Minus](https://codeforces.com/problemset/problem/1807/A) | 800 | [`codeforces/1807/A_plus_or_minus.cpp`](codeforces/1807/A_plus_or_minus.cpp) |
| 1807D | [Odd Queries](https://codeforces.com/problemset/problem/1807/D) | 900 | [`codeforces/1807/D_odd_queries.cpp`](codeforces/1807/D_odd_queries.cpp) |
| 1814A | [Coins](https://codeforces.com/problemset/problem/1814/A) | 800 | [`codeforces/1814/A_coins.cpp`](codeforces/1814/A_coins.cpp) |
| 1822C | [Bun Lover](https://codeforces.com/problemset/problem/1822/C) | 800 | [`codeforces/1822/C_bun_lover.cpp`](codeforces/1822/C_bun_lover.cpp) |
| 1828A | [Divisible Array](https://codeforces.com/problemset/problem/1828/A) | 800 | [`codeforces/1828/A_divisible_array.cpp`](codeforces/1828/A_divisible_array.cpp) |
| 1828B | [Permutation Swap](https://codeforces.com/problemset/problem/1828/B) | 900 | [`codeforces/1828/B_permutation_swap.cpp`](codeforces/1828/B_permutation_swap.cpp) |
| 1829B | [Blank Space](https://codeforces.com/problemset/problem/1829/B) | 800 | [`codeforces/1829/B_blank_space.cpp`](codeforces/1829/B_blank_space.cpp) |
| 1831A | [Twin Permutations](https://codeforces.com/problemset/problem/1831/A) | 800 | [`codeforces/1831/A_twin_permutations.cpp`](codeforces/1831/A_twin_permutations.cpp) |
| 1834A | [Unit Array](https://codeforces.com/problemset/problem/1834/A) | 800 | [`codeforces/1834/A_unit_array.cpp`](codeforces/1834/A_unit_array.cpp) |
| 1837A | [Grasshopper on a Line](https://codeforces.com/problemset/problem/1837/A) | 800 | [`codeforces/1837/A_grasshopper_on_a_line.cpp`](codeforces/1837/A_grasshopper_on_a_line.cpp) |
| 1837B | [Comparison String](https://codeforces.com/problemset/problem/1837/B) | 900 | [`codeforces/1837/B_comparison_string.cpp`](codeforces/1837/B_comparison_string.cpp) |
| 1837C | [Best Binary String](https://codeforces.com/problemset/problem/1837/C) | 1000 | [`codeforces/1837/C_best_binary_string.cpp`](codeforces/1837/C_best_binary_string.cpp) |
| 1845A | [Forbidden Integer](https://codeforces.com/problemset/problem/1845/A) | 800 | [`codeforces/1845/A_forbidden_integer.cpp`](codeforces/1845/A_forbidden_integer.cpp) |
| 1850D | [Balanced Round](https://codeforces.com/problemset/problem/1850/D) | 900 | [`codeforces/1850/D_balanced_round.cpp`](codeforces/1850/D_balanced_round.cpp) |
| 1853A | [Desorting](https://codeforces.com/problemset/problem/1853/A) | 800 | [`codeforces/1853/A_desorting.cpp`](codeforces/1853/A_desorting.cpp) |
| 1855B | [Longest Divisors Interval](https://codeforces.com/problemset/problem/1855/B) | 900 | [`codeforces/1855/B_longest_divisors_interval.cpp`](codeforces/1855/B_longest_divisors_interval.cpp) |
| 1857A | [Array Coloring](https://codeforces.com/problemset/problem/1857/A) | 800 | [`codeforces/1857/A_array_coloring.cpp`](codeforces/1857/A_array_coloring.cpp) |
| 1858A | [Buttons](https://codeforces.com/problemset/problem/1858/A) | 800 | [`codeforces/1858/A_buttons.cpp`](codeforces/1858/A_buttons.cpp) |
| 1859A | [United We Stand](https://codeforces.com/problemset/problem/1859/A) | 800 | [`codeforces/1859/A_united_we_stand.cpp`](codeforces/1859/A_united_we_stand.cpp) |
| 1862B | [Sequence Game](https://codeforces.com/problemset/problem/1862/B) | 800 | [`codeforces/1862/B_sequence_game.cpp`](codeforces/1862/B_sequence_game.cpp) |
| 1866A | [Ambitious Kid](https://codeforces.com/problemset/problem/1866/A) | 800 | [`codeforces/1866/A_ambitious_kid.cpp`](codeforces/1866/A_ambitious_kid.cpp) |
| 1869A | [Make It Zero](https://codeforces.com/problemset/problem/1869/A) | 900 | [`codeforces/1869/A_make_it_zero.cpp`](codeforces/1869/A_make_it_zero.cpp) |
| 1875A | [Jellyfish and Undertale](https://codeforces.com/problemset/problem/1875/A) | 900 | [`codeforces/1875/A_jellyfish_and_undertale.cpp`](codeforces/1875/A_jellyfish_and_undertale.cpp) |
| 1877A | [Goals of Victory](https://codeforces.com/problemset/problem/1877/A) | 800 | [`codeforces/1877/A_goals_of_victory.cpp`](codeforces/1877/A_goals_of_victory.cpp) |
| 1878A | [How Much Does Daytona Cost?](https://codeforces.com/problemset/problem/1878/A) | 800 | [`codeforces/1878/A_how_much_does_daytona_cost.cpp`](codeforces/1878/A_how_much_does_daytona_cost.cpp) |
| 1878C | [Vasilije in Cacak](https://codeforces.com/problemset/problem/1878/C) | 900 | [`codeforces/1878/C_vasilije_in_cacak.cpp`](codeforces/1878/C_vasilije_in_cacak.cpp) |
| 1881A | [Don't Try to Count](https://codeforces.com/problemset/problem/1881/A) | 800 | [`codeforces/1881/A_dont_try_to_count.cpp`](codeforces/1881/A_dont_try_to_count.cpp) |
| 1883A | [Morning](https://codeforces.com/problemset/problem/1883/A) | 800 | [`codeforces/1883/A_morning.cpp`](codeforces/1883/A_morning.cpp) |
| 1883B | [Chemistry](https://codeforces.com/problemset/problem/1883/B) | 900 | [`codeforces/1883/B_chemistry.cpp`](codeforces/1883/B_chemistry.cpp) |
| 1890A | [Doremy's Paint 3](https://codeforces.com/problemset/problem/1890/A) | 800 | [`codeforces/1890/A_doremys_paint_3.cpp`](codeforces/1890/A_doremys_paint_3.cpp) |
| 1896A | [Jagged Swaps](https://codeforces.com/problemset/problem/1896/A) | 800 | [`codeforces/1896/A_jagged_swaps.cpp`](codeforces/1896/A_jagged_swaps.cpp) |
| 1899A | [Game with Integers](https://codeforces.com/problemset/problem/1899/A) | 800 | [`codeforces/1899/A_game_with_integers.cpp`](codeforces/1899/A_game_with_integers.cpp) |
| 1901A | [Line Trip](https://codeforces.com/problemset/problem/1901/A) | 800 | [`codeforces/1901/A_line_trip.cpp`](codeforces/1901/A_line_trip.cpp) |
| 1903A | [Halloumi Boxes](https://codeforces.com/problemset/problem/1903/A) | 800 | [`codeforces/1903/A_halloumi_boxes.cpp`](codeforces/1903/A_halloumi_boxes.cpp) |
| 1904A | [Forked!](https://codeforces.com/problemset/problem/1904/A) | 900 | [`codeforces/1904/A_forked.cpp`](codeforces/1904/A_forked.cpp) |
| 1971A | [My First Sorting Problem](https://codeforces.com/problemset/problem/1971/A) | 800 | [`codeforces/1971/A_my_first_sorting_problem.cpp`](codeforces/1971/A_my_first_sorting_problem.cpp) |
| 1971B | [Different String](https://codeforces.com/problemset/problem/1971/B) | 800 | [`codeforces/1971/B_different_string.cpp`](codeforces/1971/B_different_string.cpp) |
| 1999A | [A+B Again?](https://codeforces.com/problemset/problem/1999/A) | 800 | [`codeforces/1999/A_a_b_again.cpp`](codeforces/1999/A_a_b_again.cpp) |
| 2009A | [Minimize!](https://codeforces.com/problemset/problem/2009/A) | 800 | [`codeforces/2009/A_minimize.cpp`](codeforces/2009/A_minimize.cpp) |
| 2037A | [Twice](https://codeforces.com/problemset/problem/2037/A) | 800 | [`codeforces/2037/A_twice.cpp`](codeforces/2037/A_twice.cpp) |
| 2038N | [Fixing the Expression](https://codeforces.com/problemset/problem/2038/N) | 800 | [`codeforces/2038/N_fixing_the_expression.cpp`](codeforces/2038/N_fixing_the_expression.cpp) |
| 2044B | [Normal Problem](https://codeforces.com/problemset/problem/2044/B) | 800 | [`codeforces/2044/B_normal_problem.cpp`](codeforces/2044/B_normal_problem.cpp) |
| 2050A | [Line Breaks](https://codeforces.com/problemset/problem/2050/A) | 800 | [`codeforces/2050/A_line_breaks.cpp`](codeforces/2050/A_line_breaks.cpp) |
| 2051A | [Preparing for the Olympiad](https://codeforces.com/problemset/problem/2051/A) | 800 | [`codeforces/2051/A_preparing_for_the_olympiad.cpp`](codeforces/2051/A_preparing_for_the_olympiad.cpp) |
| 2051B | [Journey](https://codeforces.com/problemset/problem/2051/B) | 800 | [`codeforces/2051/B_journey.cpp`](codeforces/2051/B_journey.cpp) |
| 2060A | [Fibonacciness](https://codeforces.com/problemset/problem/2060/A) | 800 | [`codeforces/2060/A_fibonacciness.cpp`](codeforces/2060/A_fibonacciness.cpp) |
| 2064A | [Brogramming Contest](https://codeforces.com/problemset/problem/2064/A) | 800 | [`codeforces/2064/A_brogramming_contest.cpp`](codeforces/2064/A_brogramming_contest.cpp) |
| 2065A | [Skibidus and Amog'u](https://codeforces.com/problemset/problem/2065/A) | 800 | [`codeforces/2065/A_skibidus_and_amog_u.cpp`](codeforces/2065/A_skibidus_and_amog_u.cpp) |
| 2065B | [Skibidus and Ohio](https://codeforces.com/problemset/problem/2065/B) | 800 | [`codeforces/2065/B_skibidus_and_ohio.cpp`](codeforces/2065/B_skibidus_and_ohio.cpp) |
| 2091A | [Olympiad Date](https://codeforces.com/problemset/problem/2091/A) | 800 | [`codeforces/2091/A_olympiad_date.cpp`](codeforces/2091/A_olympiad_date.cpp) |
| 2093A | [Ideal Generator](https://codeforces.com/problemset/problem/2093/A) | 800 | [`codeforces/2093/A_ideal_generator.cpp`](codeforces/2093/A_ideal_generator.cpp) |
| 2093B | [Expensive Number](https://codeforces.com/problemset/problem/2093/B) | 900 | [`codeforces/2093/B_expensive_number.cpp`](codeforces/2093/B_expensive_number.cpp) |
| 2094A | [Trippi Troppi](https://codeforces.com/problemset/problem/2094/A) | 800 | [`codeforces/2094/A_trippi_troppi.cpp`](codeforces/2094/A_trippi_troppi.cpp) |
| 2102B | [The Picky Cat](https://codeforces.com/problemset/problem/2102/B) | 900 | [`codeforces/2102/B_the_picky_cat.cpp`](codeforces/2102/B_the_picky_cat.cpp) |
| 2106A | [Dr. TC](https://codeforces.com/problemset/problem/2106/A) | 800 | [`codeforces/2106/A_dr_tc.cpp`](codeforces/2106/A_dr_tc.cpp) |
| 2109A | [It's Time To Duel](https://codeforces.com/problemset/problem/2109/A) | 800 | [`codeforces/2109/A_its_time_to_duel.cpp`](codeforces/2109/A_its_time_to_duel.cpp) |
| 2110A | [Fashionable Array](https://codeforces.com/problemset/problem/2110/A) | 800 | [`codeforces/2110/A_fashionable_array.cpp`](codeforces/2110/A_fashionable_array.cpp) |
| 2110B | [Down with Brackets](https://codeforces.com/problemset/problem/2110/B) | 900 | [`codeforces/2110/B_down_with_brackets.cpp`](codeforces/2110/B_down_with_brackets.cpp) |
| 2114A | [Square Year](https://codeforces.com/problemset/problem/2114/A) | 800 | [`codeforces/2114/A_square_year.cpp`](codeforces/2114/A_square_year.cpp) |
| 2117A | [False Alarm](https://codeforces.com/problemset/problem/2117/A) | 800 | [`codeforces/2117/A_false_alarm.cpp`](codeforces/2117/A_false_alarm.cpp) |
| 2121A | [Letter Home](https://codeforces.com/problemset/problem/2121/A) | 800 | [`codeforces/2121/A_letter_home.cpp`](codeforces/2121/A_letter_home.cpp) |
| 2123A | [Blackboard Game](https://codeforces.com/problemset/problem/2123/A) | 800 | [`codeforces/2123/A_blackboard_game.cpp`](codeforces/2123/A_blackboard_game.cpp) |
| 2123B | [Tournament](https://codeforces.com/problemset/problem/2123/B) | 800 | [`codeforces/2123/B_tournament.cpp`](codeforces/2123/B_tournament.cpp) |
| 2124B | [Minimise Sum](https://codeforces.com/problemset/problem/2124/B) | 1000 | [`codeforces/2124/B_minimise_sum.cpp`](codeforces/2124/B_minimise_sum.cpp) |
| 2126A | [Only One Digit](https://codeforces.com/problemset/problem/2126/A) | 800 | [`codeforces/2126/A_only_one_digit.cpp`](codeforces/2126/A_only_one_digit.cpp) |
| 2126B | [No Casino in the Mountains](https://codeforces.com/problemset/problem/2126/B) | 800 | [`codeforces/2126/B_no_casino_in_the_mountains.cpp`](codeforces/2126/B_no_casino_in_the_mountains.cpp) |
| 2128A | [Recycling Center](https://codeforces.com/problemset/problem/2128/A) | 800 | [`codeforces/2128/A_recycling_center.cpp`](codeforces/2128/A_recycling_center.cpp) |
| 2131A | [Lever](https://codeforces.com/problemset/problem/2131/A) | 800 | [`codeforces/2131/A_lever.cpp`](codeforces/2131/A_lever.cpp) |
| 2132A | [Homework](https://codeforces.com/problemset/problem/2132/A) | 800 | [`codeforces/2132/A_homework.cpp`](codeforces/2132/A_homework.cpp) |
| 2133B | [Villagers](https://codeforces.com/problemset/problem/2133/B) | 800 | [`codeforces/2133/B_villagers.cpp`](codeforces/2133/B_villagers.cpp) |
| 2136A | [In the Dream](https://codeforces.com/problemset/problem/2136/A) | 800 | [`codeforces/2136/A_in_the_dream.cpp`](codeforces/2136/A_in_the_dream.cpp) |
| 2137A | [Collatz Conjecture](https://codeforces.com/problemset/problem/2137/A) | 800 | [`codeforces/2137/A_collatz_conjecture.cpp`](codeforces/2137/A_collatz_conjecture.cpp) |
| 2137B | [Fun Permutation](https://codeforces.com/problemset/problem/2137/B) | 900 | [`codeforces/2137/B_fun_permutation.cpp`](codeforces/2137/B_fun_permutation.cpp) |
| 2139B | [Cake Collection](https://codeforces.com/problemset/problem/2139/B) | 800 | [`codeforces/2139/B_cake_collection.cpp`](codeforces/2139/B_cake_collection.cpp) |
| 2140A | [Shift Sort](https://codeforces.com/problemset/problem/2140/A) | 800 | [`codeforces/2140/A_shift_sort.cpp`](codeforces/2140/A_shift_sort.cpp) |
| 2143B | [Discounts](https://codeforces.com/problemset/problem/2143/B) | 1000 | [`codeforces/2143/B_discounts.cpp`](codeforces/2143/B_discounts.cpp) |
| 2145A | [Candies for Nephews](https://codeforces.com/problemset/problem/2145/A) | 800 | [`codeforces/2145/A_candies_for_nephews.cpp`](codeforces/2145/A_candies_for_nephews.cpp) |
| 2148A | [Sublime Sequence](https://codeforces.com/problemset/problem/2148/A) | 800 | [`codeforces/2148/A_sublime_sequence.cpp`](codeforces/2148/A_sublime_sequence.cpp) |
| 2148A | [Sublime Sequence](https://codeforces.com/problemset/problem/2148/A) | 800 | [`codeforces/2148/A_sublime_sequence_alt.cpp`](codeforces/2148/A_sublime_sequence_alt.cpp) (alternate) |
| 2149A | [Be Positive](https://codeforces.com/problemset/problem/2149/A) | 800 | [`codeforces/2149/A_be_positive.cpp`](codeforces/2149/A_be_positive.cpp) |
| 2149B | [Unconventional Pairs](https://codeforces.com/problemset/problem/2149/B) | 800 | [`codeforces/2149/B_unconventional_pairs.cpp`](codeforces/2149/B_unconventional_pairs.cpp) |
| 2149C | [MEX rose](https://codeforces.com/problemset/problem/2149/C) | 900 | [`codeforces/2149/C_mex_rose.cpp`](codeforces/2149/C_mex_rose.cpp) |
| 2152A | [Increase or Smash](https://codeforces.com/problemset/problem/2152/A) | 800 | [`codeforces/2152/A_increase_or_smash.cpp`](codeforces/2152/A_increase_or_smash.cpp) |
| 2153A | [Circle of Apple Trees](https://codeforces.com/problemset/problem/2153/A) | 800 | [`codeforces/2153/A_circle_of_apple_trees.cpp`](codeforces/2153/A_circle_of_apple_trees.cpp) |
| 2154A | [Notelock](https://codeforces.com/problemset/problem/2154/A) | 800 | [`codeforces/2154/A_notelock.cpp`](codeforces/2154/A_notelock.cpp) |
| 2155A | [El fucho](https://codeforces.com/problemset/problem/2155/A) | 800 | [`codeforces/2155/A_el_fucho.c`](codeforces/2155/A_el_fucho.c) |
| 2156A | [Pizza Time](https://codeforces.com/problemset/problem/2156/A) | 800 | [`codeforces/2156/A_pizza_time.cpp`](codeforces/2156/A_pizza_time.cpp) |
| 2157A | [Dungeon Equilibrium](https://codeforces.com/problemset/problem/2157/A) | 800 | [`codeforces/2157/A_dungeon_equilibrium.cpp`](codeforces/2157/A_dungeon_equilibrium.cpp) |
| 2157B | [Expansion Plan 2](https://codeforces.com/problemset/problem/2157/B) | 900 | [`codeforces/2157/B_expansion_plan_2.cpp`](codeforces/2157/B_expansion_plan_2.cpp) |
| 2158A | [Suspension](https://codeforces.com/problemset/problem/2158/A) | 800 | [`codeforces/2158/A_suspension.cpp`](codeforces/2158/A_suspension.cpp) |
| 2160A | [MEX Partition](https://codeforces.com/problemset/problem/2160/A) | 800 | [`codeforces/2160/A_mex_partition.cpp`](codeforces/2160/A_mex_partition.cpp) |
| 2162A | [Beautiful Average](https://codeforces.com/problemset/problem/2162/A) | 800 | [`codeforces/2162/A_beautiful_average.cpp`](codeforces/2162/A_beautiful_average.cpp) |
| 2163A | [Souvlaki VS. Kalamaki](https://codeforces.com/problemset/problem/2163/A) | 800 | [`codeforces/2163/A_souvlaki_vs_kalamaki.cpp`](codeforces/2163/A_souvlaki_vs_kalamaki.cpp) |
| 2166A | [Same Difference](https://codeforces.com/problemset/problem/2166/A) | 800 | [`codeforces/2166/A_same_difference.cpp`](codeforces/2166/A_same_difference.cpp) |
| 2166B | [Tab Closing](https://codeforces.com/problemset/problem/2166/B) | 900 | [`codeforces/2166/B_tab_closing.cpp`](codeforces/2166/B_tab_closing.cpp) |
| 2167A | [Square?](https://codeforces.com/problemset/problem/2167/A) | 800 | [`codeforces/2167/A_square.cpp`](codeforces/2167/A_square.cpp) |
| 2167B | [Your Name](https://codeforces.com/problemset/problem/2167/B) | 800 | [`codeforces/2167/B_your_name.cpp`](codeforces/2167/B_your_name.cpp) |
| 2167C | [Isamatdin and His Magic Wand!](https://codeforces.com/problemset/problem/2167/C) | 800 | [`codeforces/2167/C_isamatdin_and_his_magic_wand.cpp`](codeforces/2167/C_isamatdin_and_his_magic_wand.cpp) |
| 2167D | [Yet Another Array Problem](https://codeforces.com/problemset/problem/2167/D) | 1000 | [`codeforces/2167/D_yet_another_array_problem.cpp`](codeforces/2167/D_yet_another_array_problem.cpp) |
| 2169A | [Alice and Bob](https://codeforces.com/problemset/problem/2169/A) | 900 | [`codeforces/2169/A_alice_and_bob.cpp`](codeforces/2169/A_alice_and_bob.cpp) |
| 2170A | [Maximum Neighborhood](https://codeforces.com/problemset/problem/2170/A) | 800 | [`codeforces/2170/A_maximum_neighborhood.cpp`](codeforces/2170/A_maximum_neighborhood.cpp) |
| 2171A | [Shizuku Hoshikawa and Farm Legs](https://codeforces.com/problemset/problem/2171/A) | 800 | [`codeforces/2171/A_shizuku_hoshikawa_and_farm_legs.cpp`](codeforces/2171/A_shizuku_hoshikawa_and_farm_legs.cpp) |
| 2171B | [Yuu Koito and Minimum Absolute Sum](https://codeforces.com/problemset/problem/2171/B) | 900 | [`codeforces/2171/B_yuu_koito_and_minimum_absolute_sum.cpp`](codeforces/2171/B_yuu_koito_and_minimum_absolute_sum.cpp) |
| 2172E | [Number Maze](https://codeforces.com/problemset/problem/2172/E) | 1200 | [`codeforces/2172/E_number_maze.cpp`](codeforces/2172/E_number_maze.cpp) |
| 2173A | [Sleeping Through Classes](https://codeforces.com/problemset/problem/2173/A) | 800 | [`codeforces/2173/A_sleeping_through_classes.cpp`](codeforces/2173/A_sleeping_through_classes.cpp) |
| 2175A | [Little Fairy's Painting](https://codeforces.com/problemset/problem/2175/A) | 800 | [`codeforces/2175/A_little_fairys_painting.cpp`](codeforces/2175/A_little_fairys_painting.cpp) |
| 2176A | [Operations with Inversions](https://codeforces.com/problemset/problem/2176/A) | 800 | [`codeforces/2176/A_operations_with_inversions.cpp`](codeforces/2176/A_operations_with_inversions.cpp) |
| 2178A | [Yes or Yes](https://codeforces.com/problemset/problem/2178/A) | 800 | [`codeforces/2178/A_yes_or_yes.cpp`](codeforces/2178/A_yes_or_yes.cpp) |
| 2179B | [Blackslex and Showering](https://codeforces.com/problemset/problem/2179/B) | 800 | [`codeforces/2179/B_blackslex_and_showering.cpp`](codeforces/2179/B_blackslex_and_showering.cpp) |
| 2180A | [Carnival Wheel](https://codeforces.com/problemset/problem/2180/A) | 800 | [`codeforces/2180/A_carnival_wheel.cpp`](codeforces/2180/A_carnival_wheel.cpp) |
| 2180B | [Ashmal](https://codeforces.com/problemset/problem/2180/B) | 800 | [`codeforces/2180/B_ashmal.cpp`](codeforces/2180/B_ashmal.cpp) |
| 2182A | [New Year String](https://codeforces.com/problemset/problem/2182/A) | 800 | [`codeforces/2182/A_new_year_string.cpp`](codeforces/2182/A_new_year_string.cpp) |
| 2184A | [Social Experiment](https://codeforces.com/problemset/problem/2184/A) | 800 | [`codeforces/2184/A_social_experiment.cpp`](codeforces/2184/A_social_experiment.cpp) |
| 2184B | [Hourglass](https://codeforces.com/problemset/problem/2184/B) | 1100 | [`codeforces/2184/B_hourglass.cpp`](codeforces/2184/B_hourglass.cpp) |
| 2185A | [Perfect Root](https://codeforces.com/problemset/problem/2185/A) | 800 | [`codeforces/2185/A_perfect_root.cpp`](codeforces/2185/A_perfect_root.cpp) |
| 2185B | [Prefix Max](https://codeforces.com/problemset/problem/2185/B) | 800 | [`codeforces/2185/B_prefix_max.cpp`](codeforces/2185/B_prefix_max.cpp) |
| 2185C | [Shifted MEX](https://codeforces.com/problemset/problem/2185/C) | 900 | [`codeforces/2185/C_shifted_mex.cpp`](codeforces/2185/C_shifted_mex.cpp) |
| 2188A | [Divisible Permutation](https://codeforces.com/problemset/problem/2188/A) | 800 | [`codeforces/2188/A_divisible_permutation.py`](codeforces/2188/A_divisible_permutation.py) |
| 2188B | [Seats](https://codeforces.com/problemset/problem/2188/B) | 1000 | [`codeforces/2188/B_seats.cpp`](codeforces/2188/B_seats.cpp) |
| 2189A | [Table with Numbers](https://codeforces.com/problemset/problem/2189/A) | 800 | [`codeforces/2189/A_table_with_numbers.cpp`](codeforces/2189/A_table_with_numbers.cpp) |
| 2191A | [Array Coloring](https://codeforces.com/problemset/problem/2191/A) | 800 | [`codeforces/2191/A_array_coloring.cpp`](codeforces/2191/A_array_coloring.cpp) |
| 2193A | [DBMB and the Array](https://codeforces.com/problemset/problem/2193/A) | 800 | [`codeforces/2193/A_dbmb_and_the_array.cpp`](codeforces/2193/A_dbmb_and_the_array.cpp) |
| 2193B | [Reverse a Permutation](https://codeforces.com/problemset/problem/2193/B) | 800 | [`codeforces/2193/B_reverse_a_permutation.cpp`](codeforces/2193/B_reverse_a_permutation.cpp) |
| 2193B | [Reverse a Permutation](https://codeforces.com/problemset/problem/2193/B) | 800 | [`codeforces/2193/B_reverse_a_permutation_empty.cpp`](codeforces/2193/B_reverse_a_permutation_empty.cpp) (empty file) |
| 2194A | [Lawn Mower](https://codeforces.com/problemset/problem/2194/A) | 800 | [`codeforces/2194/A_lawn_mower.cpp`](codeforces/2194/A_lawn_mower.cpp) |
| 2195A | [Sieve of Erato67henes](https://codeforces.com/problemset/problem/2195/A) | 800 | [`codeforces/2195/A_sieve_of_erato67henes.cpp`](codeforces/2195/A_sieve_of_erato67henes.cpp) |
| 2195B | [Heapify 1](https://codeforces.com/problemset/problem/2195/B) | 900 | [`codeforces/2195/B_heapify_1.cpp`](codeforces/2195/B_heapify_1.cpp) |
| 2200A | [Eating Game](https://codeforces.com/problemset/problem/2200/A) | 800 | [`codeforces/2200/A_eating_game.cpp`](codeforces/2200/A_eating_game.cpp) |
| 2203A | [Towers of Boxes](https://codeforces.com/problemset/problem/2203/A) | 800 | [`codeforces/2203/A_towers_of_boxes.cpp`](codeforces/2203/A_towers_of_boxes.cpp) |
| 2204A | [Passing the Ball](https://codeforces.com/problemset/problem/2204/A) | 800 | [`codeforces/2204/A_passing_the_ball.cpp`](codeforces/2204/A_passing_the_ball.cpp) |
| 2204B | [Right Maximum](https://codeforces.com/problemset/problem/2204/B) | 800 | [`codeforces/2204/B_right_maximum.cpp`](codeforces/2204/B_right_maximum.cpp) |
| 2227A | [Koshary](https://codeforces.com/problemset/problem/2227/A) | 800 | [`codeforces/2227/A_koshary.cpp`](codeforces/2227/A_koshary.cpp) |
| 2230A | [Optimal Purchase](https://codeforces.com/problemset/problem/2230/A) | 800 | [`codeforces/2230/A_optimal_purchase.cpp`](codeforces/2230/A_optimal_purchase.cpp) |
| 2230B | [Digit String](https://codeforces.com/problemset/problem/2230/B) | 1000 | [`codeforces/2230/B_digit_string.cpp`](codeforces/2230/B_digit_string.cpp) |
| 2231C | [Chipmunk Theo and Equality](https://codeforces.com/problemset/problem/2231/C) | 1400 | [`codeforces/2231/C_chipmunk_theo_and_equality.cpp`](codeforces/2231/C_chipmunk_theo_and_equality.cpp) |
| 2236A | [Games on the Train](https://codeforces.com/problemset/problem/2236/A) | 800 | [`codeforces/2236/A_games_on_the_train.cpp`](codeforces/2236/A_games_on_the_train.cpp) |
| 2236B | [Tatar TV Show](https://codeforces.com/problemset/problem/2236/B) | 800 | [`codeforces/2236/B_tatar_tv_show.cpp`](codeforces/2236/B_tatar_tv_show.cpp) |
| 2238A | [Another Puzzle from Papyrus](https://codeforces.com/problemset/problem/2238/A) | 800 | [`codeforces/2238/A_another_puzzle_from_papyrus.cpp`](codeforces/2238/A_another_puzzle_from_papyrus.cpp) |
| 2241A | [Divide and Conquer](https://codeforces.com/problemset/problem/2241/A) | 800 | [`codeforces/2241/A_divide_and_conquer.cpp`](codeforces/2241/A_divide_and_conquer.cpp) |
| 2241B | [Good times Good times](https://codeforces.com/problemset/problem/2241/B) | 1100 | [`codeforces/2241/B_good_times_good_times.cpp`](codeforces/2241/B_good_times_good_times.cpp) |
| 2241C | [RemovevomeR](https://codeforces.com/problemset/problem/2241/C) | 1000 | [`codeforces/2241/C_removevomer.cpp`](codeforces/2241/C_removevomer.cpp) |
| 2242A | [Bigrams](https://codeforces.com/problemset/problem/2242/A) | 800 | [`codeforces/2242/A_bigrams.cpp`](codeforces/2242/A_bigrams.cpp) |
| 2244A | [Iskander and Drawings](https://codeforces.com/problemset/problem/2244/A) | 800 | [`codeforces/2244/A_iskander_and_drawings.cpp`](codeforces/2244/A_iskander_and_drawings.cpp) |
| 2245A | [Who Watches the Watchpig?](https://codeforces.com/problemset/problem/2245/A) | 800 | [`codeforces/2245/A_who_watches_the_watchpig.cpp`](codeforces/2245/A_who_watches_the_watchpig.cpp) |
| 2247A | [Zero Sum](https://codeforces.com/problemset/problem/2247/A) | 800 | [`codeforces/2247/A_zero_sum.cpp`](codeforces/2247/A_zero_sum.cpp) |
| 2256A | [Three Numbers on the Blackboard](https://codeforces.com/problemset/problem/2256/A) | 800 | [`codeforces/2256/A_three_numbers_on_the_blackboard.cpp`](codeforces/2256/A_three_numbers_on_the_blackboard.cpp) |

## CSES

| Problem | File |
| --- | --- |
| [Weird Algorithm](https://cses.fi/problemset/task/1068) | [`cses/weird_algorithm.cpp`](cses/weird_algorithm.cpp) |
| [Missing Number](https://cses.fi/problemset/task/1083) | [`cses/missing_number.cpp`](cses/missing_number.cpp) |
| [Repetitions](https://cses.fi/problemset/task/1069) | [`cses/repetitions.cpp`](cses/repetitions.cpp) |

## HackerRank

| Problem | File |
| --- | --- |
| [C++ Maps STL](https://www.hackerrank.com/challenges/cpp-maps/problem) | [`hackerrank/maps_STL.cpp`](hackerrank/maps_STL.cpp) |

## Templates

| File | What it is |
| --- | --- |
| [`templates/template.cpp`](templates/template.cpp) | C++ contest template (`Solution` class, I/O helpers) |
| [`templates/template.c`](templates/template.c) | Minimal C starter |
| [`templates/jaylib.cpp`](templates/jaylib.cpp) | Small min/max helpers |

## `misc/` — please check

These files were kept but could not be placed confidently (or are unfinished). Nothing was deleted.

| File | Original name | Notes |
| --- | --- | --- |
| [`misc/p2719a.cpp`](misc/p2719a.cpp) | `p2719a.cpp` | Looks like a Codeforces-style solution (`t` test cases, reads `k x`, prints `k*x+1`), but contest 2719 does not exist on Codeforces. If you remember the real id, this should move under `codeforces/`. |
| [`misc/monocarp.cpp`](misc/monocarp.cpp) | `monocarp.cpp` | Three integers `a b c` with a YES/NO check involving their average. “Monocarp” appears in many statements; the exact problem was not identified. |
| [`misc/seqgame.cpp`](misc/seqgame.cpp) | `seqgame.cpp` | Reads an array and a value `c`, then checks whether `c` lies between the min and max. Not [1862B Sequence Game](https://codeforces.com/problemset/problem/1862/B) (that one is already in `codeforces/1862/`). |
| [`misc/r5a.cpp`](misc/r5a.cpp) | `r5a.cpp` | Counts integers in a range related to a midpoint `x`. Filename looks like a local/round-5 problem rather than a public Codeforces id. |
| [`misc/gcl.cpp`](misc/gcl.cpp) | `gcl.cpp` | Reads three numbers `g c l` and prints `final` / `check again`. Does not look like a contest problem (maybe a personal helper). |
| [`misc/cutarray.cpp`](misc/cutarray.cpp) | `cutarray.cpp` | Incomplete stub (empty function, no output). |
| [`misc/max_even.cpp`](misc/max_even.cpp) | `max_even.cpp` | Incomplete stub (unfinished `if()`). |
| [`misc/sets.cpp`](misc/sets.cpp) | `sets.cpp` | STL `set` practice, not a problem solution. |
| [`misc/llop.py`](misc/llop.py) | `llop.py` | Tiny Python loop practice (`sum` of `0..4`). |
| [`misc/tests/`](misc/tests/) | `fas.txt`, `test.txt`, `testinput.txt` | Sample / scratch input. `fas.txt` is a Fox and Snake (510A) sample; the others were not tied to a single file with certainty. |

## Filename fixes worth knowing

A few original names did not match the problem they actually solve. The files were moved to the correct ids; the code itself was not changed.

| Original file | Actually is |
| --- | --- |
| `p2521a.cpp` | [2152A Increase or Smash](https://codeforces.com/problemset/problem/2152/A) (the file already had this URL in a comment; 2521 is not a contest) |
| `dubstep.cpp` | [1692A Marathon](https://codeforces.com/problemset/problem/1692/A) (the real Dubstep solution is `codeforces/208/A_dubstep.cpp`) |
| `req_remainder.cpp` | [617A Elephant](https://codeforces.com/problemset/problem/617/A) (the real Required Remainder is `codeforces/1374/A_required_remainder.cpp`) |
| `luckynumbers.cpp` | [271A Beautiful Year](https://codeforces.com/problemset/problem/271/A) |
| `luckyboys.cpp` | [110A Nearly Lucky Number](https://codeforces.com/problemset/problem/110/A) |
| `lucky.cpp` | [1676A Lucky?](https://codeforces.com/problemset/problem/1676/A) |
| `p2094.cpp` / `p2126.cpp` | [2094A Trippi Troppi](https://codeforces.com/problemset/problem/2094/A) and [2126A Only One Digit](https://codeforces.com/problemset/problem/2126/A) (the letter was missing from the old names) |

Duplicate solutions kept:

- [707A Brain's Photos](https://codeforces.com/problemset/problem/707/A) — `p707a.cpp` and `bbprat.cpp`
- [2148A Sublime Sequence](https://codeforces.com/problemset/problem/2148/A) — `p2148a.cpp` and `ivansol.cpp`
- [2193B Reverse a Permutation](https://codeforces.com/problemset/problem/2193/B) — `p2193b.cpp`, plus an empty `2193b.cpp` kept as `_empty`

A couple of files look like attempts that were not accepted on the DARTHNEMESIS account (still kept): `codeforces/118/A_string_task.cpp` and `codeforces/1512/A_spy_detected.cpp`.
