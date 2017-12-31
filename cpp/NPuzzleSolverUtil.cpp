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

#include <cpp/NPuzzleSolverUtil.h>

#include <vector>
#include <queue>
#include <stack>

void print_path(Node* final_state) {
        std::stack<Node*> solution_path;

        while (final_state != NULL) {
                solution_path.push(final_state);
                final_state = final_state->get_parent();
        }

        while (!solution_path.empty()) {
                Node* _node = solution_path.top();
                solution_path.pop();
                _node->print_node();
        }
}

NPuzzleSolver::NPuzzleSolver(
                const std::vector < std::vector<int> >&initial_state,
                const std::vector< std::vector<int> >&final_state) {
        this->initial_state = initial_state;
        this->final_state = final_state;
}

void NPuzzleSolver::find_solution() {
        // TODO(rudra): Add N Puzzle Solution
        Node* root = new Node(NULL, initial_state,
                        get_distance(initial_state, final_state));
        std::priority_queue<Node*> queue;

        queue.push(root);
        while (!queue.empty()) {
                Node* min_node = queue.top();
                queue.pop();

                if (min_node->get_manhattan_distance() == 0) {
                        print_path(min_node);
                        break;
                }

                Node* move_space_left, move_space_right,
                        move_space_up, move_space_down;

                move_space_up = get_child(min_node, 0);
                move_space_up = get_child(min_node, 1);
                move_space_up = get_child(min_node, 2);
                move_space_up = get_child(min_node, 3);

                if (move_space_up != NULL) {
                        queue.push(move_space_up);
                }
                if (move_space_down != NULL) {
                        queue.push(move_space_down);
                }
                if (move_space_left != NULL) {
                        queue.push(move_space_left);
                }
                if (move_space_down != NULL) {
                        queue.push(move_space_down);
                }
        }
}

