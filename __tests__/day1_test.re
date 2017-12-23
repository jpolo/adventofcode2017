open Jest;

describe(
  "Day1.run()",
  () => {
    open Expect;
    test("should two digits", () => expect(Day1.run("1122")) |> toBe(3));
    test("should add four digits", () => expect(Day1.run("1111")) |> toBe(4));
    test(
      "should return 0 when no pair found",
      () => expect(Day1.run("1234")) |> toBe(0)
    )
  }
);
