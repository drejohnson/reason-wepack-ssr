let component = ReasonReact.statelessComponent("About");

let make = (~redirect, _children) => {
  ...component,
  render: (_self) =>
    <div>
      <a onClick=(redirect("/"))> ("Home" |> Utils.text) </a>
      <a onClick=(redirect("/about"))> ("About" |> Utils.text) </a>
      <Hello message="Hello from about component" />
    </div>
};