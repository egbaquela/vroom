#ifndef VEHICLE_H
#define VEHICLE_H

/*

This file is part of VROOM.

Copyright (c) 2015-2018, Julien Coupey.
All rights reserved (see LICENSE).

*/

#include "structures/typedefs.h"
#include "structures/vroom/amount.h"
#include "structures/vroom/location.h"

struct vehicle_t {
  const ID_t id;
  boost::optional<location_t> start;
  boost::optional<location_t> end;
  const amount_t capacity;
  const skills_t skills;

  vehicle_t(ID_t id,
            const boost::optional<location_t>& start,
            const boost::optional<location_t>& end,
            const amount_t& capacity = amount_t(0),
            const skills_t& skills = skills_t());

  bool has_start() const;

  bool has_end() const;
};

#endif
