//
//  MapDefines.h
//  ld64
//
//  Created by Michael Eisel on 2/19/20.
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#ifndef MapDefines_h
#define MapDefines_h

#include "absl/container/flat_hash_map.h"
#include "absl/container/flat_hash_set.h"

#include "absl/container/btree_map.h"
#include "absl/container/btree_set.h"

#define LDOrderedMap absl::btree_map
#define LDMap absl::flat_hash_map
#define LDSet absl::flat_hash_set
#define LDOrderedSet absl::btree_set


#endif /* MapDefines_h */
