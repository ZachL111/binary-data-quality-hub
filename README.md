# binary-data-quality-hub

`binary-data-quality-hub` keeps a focused C++ implementation around data engineering. The project goal is to build a C++ toolkit that studies quality behavior through safe and unsafe fixtures, with remediation hints and offline replay mode.

## Why I Keep It Small

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how schema drift and partition skew should influence a review result.

## Binary Data Quality Hub Review Notes

For a quick review, compare `lineage depth` with `schema drift` before reading the middle cases.

## Included Behavior

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/binary-data-quality-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `lineage depth` and `schema drift`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Internal Model

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The C++ implementation avoids hidden state so fixture changes are easy to reason about.

## Try It Locally

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Validation

That command is also the regression path. It verifies the domain cases and catches mismatches between the CSV, metadata, and code.

## Scope

This remains a local project with deterministic fixtures. It does not depend on credentials, hosted services, or live data. Future work should add richer malformed inputs before widening the public API.
