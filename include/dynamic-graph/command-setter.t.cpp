//
// Copyright 2010 CNRS
//
// Author: Florent Lamiraux
//
// This file is part of dynamic-graph.
// dynamic-graph is free software: you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation, either version 3 of
// the License, or (at your option) any later version.
// dynamic-graph is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.  You should
// have received a copy of the GNU Lesser General Public License along
// with dynamic-graph.  If not, see <http://www.gnu.org/licenses/>.

#ifndef DYNAMIC_GRAPH_COMMAND_SETTER_T_CPP
#define DYNAMIC_GRAPH_COMMAND_SETTER_T_CPP

#include <sstream>
#include <boost/assign/list_of.hpp>
#include "dynamic-graph/linear-algebra.h"

namespace dynamicgraph {
  class Entity;
  namespace command {

    // 
    // Template specialization: bool
    //
    template <class E>
    class Setter<E, bool> : public Command {
    public:
      /// Pointer to method that sets parameter of type bool
      typedef void (E::*SetterMethod) (const bool&);
      /// Constructor
      Setter(E& entity, SetterMethod setterMethod,
	     const std::string& docString);

    protected:
      virtual Value doExecute();

    private:
      SetterMethod setterMethod_;
    }; // Class Setter

    template <class E>
    Setter<E, bool>::Setter(E& entity, SetterMethod setterMethod,
			    const std::string& docString) :
      Command(entity, boost::assign::list_of(Value::BOOL), docString),
      setterMethod_(setterMethod)
    {
    }

    template <class E>
    Value Setter<E, bool>::doExecute()
    {
      const std::vector<Value>& values = getParameterValues();
      // Get parameter
      bool value = values[0].value();
      E& entity = static_cast<E&>(owner());
      (entity.*setterMethod_)(value);
      return Value();
    }

    // 
    // Template specialization: unsigned
    //
    template <class E>
    class Setter<E, unsigned> : public Command {
    public:
      /// Pointer to method that sets parameter of type unsigned
      typedef void (E::*SetterMethod) (const unsigned&);
      /// Constructor
      Setter(E& entity, SetterMethod setterMethod,
	     const std::string& docString);

    protected:
      virtual Value doExecute();

    private:
      SetterMethod setterMethod_;
    }; // Class Setter

    template <class E>
    Setter<E, unsigned>::Setter(E& entity, SetterMethod setterMethod,
				const std::string& docString) :
      Command(entity, boost::assign::list_of(Value::UNSIGNED), docString),
      setterMethod_(setterMethod)
    {
    }

    template <class E>
    Value Setter<E, unsigned>::doExecute()
    {
      const std::vector<Value>& values = getParameterValues();
      // Get parameter
      unsigned value = values[0].value();
      E& entity = static_cast<E&>(owner());
      (entity.*setterMethod_)(value);
      return Value();
    }

    // 
    // Template specialization: int
    //
    template <class E>
    class Setter<E, int> : public Command {
    public:
      /// Pointer to method that sets parameter of type int
      typedef void (E::*SetterMethod) (const int&);
      /// Constructor
      Setter(E& entity, SetterMethod setterMethod,
	     const std::string& docString);

    protected:
      virtual Value doExecute();

    private:
      SetterMethod setterMethod_;
    }; // Class Setter

    template <class E>
    Setter<E, int>::Setter(E& entity, SetterMethod setterMethod,
			   const std::string& docString) :
      Command(entity, boost::assign::list_of(Value::INT), docString),
      setterMethod_(setterMethod)
    {
    }

    template <class E>
    Value Setter<E, int>::doExecute()
    {
      const std::vector<Value>& values = getParameterValues();
      // Get parameter
      int value = values[0].value();
      E& entity = static_cast<E&>(owner());
      (entity.*setterMethod_)(value);
      return Value();
    }

    // 
    // Template specialization: float
    //
    template <class E>
    class Setter<E, float> : public Command {
    public:
      /// Pointer to method that sets parameter of type float
      typedef void (E::*SetterMethod) (const float&);
      /// Constructor
      Setter(E& entity, SetterMethod setterMethod,
	     const std::string& docString);

    protected:
      virtual Value doExecute();

    private:
      SetterMethod setterMethod_;
    }; // Class Setter

    template <class E>
    Setter<E, float>::Setter(E& entity, SetterMethod setterMethod,
			     const std::string& docString) :
      Command(entity, boost::assign::list_of(Value::FLOAT), docString),
      setterMethod_(setterMethod)
    {
    }

    template <class E>
    Value Setter<E, float>::doExecute()
    {
      const std::vector<Value>& values = getParameterValues();
      // Get parameter
      float value = values[0].value();
      E& entity = static_cast<E&>(owner());
      (entity.*setterMethod_)(value);
      return Value();
    }

    // 
    // Template specialization: double
    //
    template <class E>
    class Setter<E, double> : public Command {
    public:
      /// Pointer to method that sets parameter of type double
      typedef void (E::*SetterMethod) (const double&);
      /// Constructor
      Setter(E& entity, SetterMethod setterMethod,
	     const std::string& docString);

    protected:
      virtual Value doExecute();

    private:
      SetterMethod setterMethod_;
    }; // Class Setter

    template <class E>
    Setter<E, double>::Setter(E& entity, SetterMethod setterMethod,
			      const std::string& docString) :
      Command(entity, boost::assign::list_of(Value::DOUBLE), docString),
      setterMethod_(setterMethod)
    {
    }

    template <class E>
    Value Setter<E, double>::doExecute()
    {
      const std::vector<Value>& values = getParameterValues();
      // Get parameter
      double value = values[0].value();
      E& entity = static_cast<E&>(owner());
      (entity.*setterMethod_)(value);
      return Value();
    }

    // 
    // Template specialization: std::string
    //
    template <class E>
    class Setter<E, std::string> : public Command {
    public:
      /// Pointer to method that sets parameter of type std::string
      typedef void (E::*SetterMethod) (const std::string&);
      /// Constructor
      Setter(E& entity, SetterMethod setterMethod,
	     const std::string& docString);

    protected:
      virtual Value doExecute();

    private:
      SetterMethod setterMethod_;
    }; // Class Setter

    template <class E>
    Setter<E, std::string>::Setter(E& entity, SetterMethod setterMethod,
				   const std::string& docString) :
      Command(entity, boost::assign::list_of(Value::STRING), docString),
      setterMethod_(setterMethod)
    {
    }

    template <class E>
    Value Setter<E, std::string>::doExecute()
    {
      const std::vector<Value>& values = getParameterValues();
      // Get parameter
      std::string value = values[0].value();
      E& entity = static_cast<E&>(owner());
      (entity.*setterMethod_)(value);
      return Value();
    }

    // 
    // Template specialization: Vector
    //
    template <class E>
    class Setter<E, Vector> : public Command {
    public:
      /// Pointer to method that sets parameter of type Vector
      typedef void (E::*SetterMethod) (const Vector&);
      /// Constructor
      Setter(E& entity, SetterMethod setterMethod,
	     const std::string& docString);

    protected:
      virtual Value doExecute();

    private:
      SetterMethod setterMethod_;
    }; // Class Setter

    template <class E>
    Setter<E, Vector>::Setter(E& entity, SetterMethod setterMethod,
			      const std::string& docString) :
      Command(entity, boost::assign::list_of(Value::VECTOR), docString),
      setterMethod_(setterMethod)
    {
    }

    template <class E>
    Value Setter<E, Vector>::doExecute()
    {
      const std::vector<Value>& values = getParameterValues();
      // Get parameter
      Vector value = values[0].value();
      E& entity = static_cast<E&>(owner());
      (entity.*setterMethod_)(value);
      return Value();
    }

    // 
    // Template specialization: Matrix
    //
    template <class E>
    class Setter<E, Matrix> : public Command {
    public:
      /// Pointer to method that sets parameter of type Matrix
      typedef void (E::*SetterMethod) (const Matrix&);
      /// Constructor
      Setter(E& entity, SetterMethod setterMethod,
	     const std::string& docString);

    protected:
      virtual Value doExecute();

    private:
      SetterMethod setterMethod_;
    }; // Class Setter

    template <class E>
    Setter<E, Matrix>::Setter(E& entity, SetterMethod setterMethod,
			      const std::string& docString) :
      Command(entity, boost::assign::list_of(Value::MATRIX), docString),
      setterMethod_(setterMethod)
    {
    }

    template <class E>
    Value Setter<E, Matrix>::doExecute()
    {
      const std::vector<Value>& values = getParameterValues();
      // Get parameter
      Matrix value = values[0].value();
      E& entity = static_cast<E&>(owner());
      (entity.*setterMethod_)(value);
      return Value();
    }

  } // namespace command
} // namespace dynamicgraph

#endif // DYNAMIC_GRAPH_COMMAND_SETTER_T_CPP
