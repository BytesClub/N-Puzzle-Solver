/*
 * Copyright 2017 Bytes Club
 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CPP_NPUZZLESOLVERUTIL_H_
#define CPP_NPUZZLESOLVERUTIL_H_

#include <vector>
#include <iostream>

class Node {
        Node* parent;
        std::vector< std::vector<int> > state;

        int manhattan_distance;

        /* Position of the Blank spot */
        int x, y;

        Node() {}

 public:
        Node(Node* parent,
                        const std::vector< std::vector<int> >&state,
                        int manhattan_distance) {
                this->parent = parent;
                this->state = state;
                this->manhattan_distance = manhattan_distance;
        }
};

class NPuzzleSolver {
 public:
         NPuzzleSolver(const std::vector < std::vector<int> > &initial_state,
                         const std::vector< std::vector<int> > &final_state);
         void find_solution();
 private:
         std::vector< std::vector <int> > initial_state, final_state;
         int get_distance(
                         const std::vector< std::vector<int> >&initial_state,
                         const std::vector< std::vector<int> >&final_state);
};

#endif  // CPP_NPUZZLESOLVERUTIL_H_
