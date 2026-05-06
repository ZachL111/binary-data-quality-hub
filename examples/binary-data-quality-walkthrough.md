# Binary Data Quality Hub Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 136 | watch |
| stress | lineage depth | 167 | ship |
| edge | partition skew | 162 | ship |
| recovery | quality gap | 138 | watch |
| stale | schema drift | 125 | watch |

Start with `stress` and `stale`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

`stress` is the optimistic case; use it to make sure the scoring path still rewards strong signal.
