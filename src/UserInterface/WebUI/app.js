document.getElementById('workflowForm').addEventListener('submit', function (e) {
    e.preventDefault();

    const workflowName = document.getElementById('workflowName').value;
    const taskName = document.getElementById('taskName').value;

    if (workflowName && taskName) {
        addWorkflow(workflowName, taskName);
        document.getElementById('workflowForm').reset();
    }
});

function addWorkflow(workflowName, taskName) {
    const workflowsList = document.getElementById('workflows');
    const li = document.createElement('li');
    li.textContent = `Workflow: ${workflowName}, Task: ${taskName}`;
    workflowsList.appendChild(li);
}
