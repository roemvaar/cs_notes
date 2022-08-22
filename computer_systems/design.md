# Design Lessons

## How can you plan for the kind of architectural volatility demanding to
integrate a new technology every now and then? You can’t.

What you can do is make it easy to change. Hide third-party
APIs behind your own abstraction layers. Break your code into
components: even if you end up deploying them on a single
massive server, this approach is a lot easier than taking a
monolithic application and splitting it. (We have the scars to
prove it.)

## Avoid global data

In general, your code is easier to understand and maintain if you explicitly pass any
required context into your modules.

* In object-oriented applications, context is often passed as parameters to
objects’ constructors. 

* In structured programming (C), you can create structures containing the context and pass around
references to them.

## Data formats

If you have tools that interact between them, connect them with a human-readable format, in this case, people can build
a parser to use the data. Instead, if you choose to have a dump of the memory (object file), it will be harder to interact
with your system as time passes by. Nowadays, storage is not longer a concern, so take advantage of that and use something
like a JSON file.

## Incremental Approach

* A project is never finished: there will always be changes required and functions to add. It is an incremental approach.
* Users get to see something working early
* Start with tracing code - Developers build a structure to work in 