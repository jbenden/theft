#ifndef THEFT_CALL_INTERNAL_H
#define THEFT_CALL_INTERNAL_H

#include "theft_call.h"
#include "theft_bloom.h"
#include <assert.h>

#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <poll.h>
#include <signal.h>
#include <errno.h>

static enum theft_trial_res
theft_call_inner(struct theft *t, void **args);

static enum theft_trial_res
parent_handle_child_call(struct theft *t, pid_t pid, int fd);

static enum theft_hook_fork_post_res
run_fork_post_hook(struct theft *t, void **args);

#endif
