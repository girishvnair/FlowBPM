document.addEventListener('DOMContentLoaded', function () {
    // Simulate loading workflows and tasks
    const workflows = ['Workflow 1', 'Workflow 2', 'Workflow 3'];
    const tasks = ['Task A', 'Task B', 'Task C'];

    const workflowList = document.getElementById('workflows');
    const taskList = document.getElementById('tasks');

    // Populate workflows
    workflows.forEach(workflow => {
        const li = document.createElement('li');
        li.textContent = workflow;
        workflowList.appendChild(li);
    });

    // Populate tasks
    tasks.forEach(task => {
        const li = document.createElement('li');
        li.textContent = task;
        taskList.appendChild(li);
    });
});
