# BNF Design 

The aim here is to produce a code generator for PEGTL parsers from a BNF grammar
description. The tool will take as input a BNF grammar in a file, and output a
file that can be included into a project and compiled / used as a normal PEGTL
grammar.

How will users hook into the generated parser?
* We define tag types for productions in the grammar and allow the user to
  specialise hooks for them - pass around a context as well so that they can
  build up a parse tree / other object as they need it.
* So for every production we offer a specialisation point to the consumer of the
  grammar - signature passes some kind of arbitrary context in along with the
  segment of the input that was matched.
* The user supplies a header file that gets merged / included alongside the
  generated bits.
