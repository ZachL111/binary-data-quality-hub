# Review Journal

The review surface for `binary-data-quality-hub` is deliberately narrow: one fixture, one scoring rule, and one local check.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 136, lane `watch`
- `stress`: `lineage depth`, score 167, lane `ship`
- `edge`: `partition skew`, score 162, lane `ship`
- `recovery`: `quality gap`, score 138, lane `watch`
- `stale`: `schema drift`, score 125, lane `watch`

## Note

The repository should be understandable without pretending it is larger than it is.
