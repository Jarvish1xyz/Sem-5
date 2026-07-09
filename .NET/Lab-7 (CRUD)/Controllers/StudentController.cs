using Lab_7__CRUD_.Models;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;

namespace Lab_7__CRUD_.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class StudentController : ControllerBase
    {

        List<Student> students = [
            new Student { Id = 1, Name = "John Doe", Subject="BEWT", Age = 20 },
            new Student { Id = 2, Name = "John Doe1", Subject="FEWT", Age = 20 },
            new Student { Id = 3, Name = "John Doe2", Subject="CN", Age = 20 },

        ];

        [HttpGet]
        public ActionResult<List<Student>> GetStudents()
        {
            return Ok(students);
        }

        [HttpGet("{id}")]
        public ActionResult<Student> GetStudentById(int id)
        {
            var student = students.Find(s => s.Id == id);
            if (student == null) return NotFound();
            return Ok(student);
        }

        [HttpDelete("{id}")]
        public ActionResult<List<Student>> DeleteStudent(int id)
        {
            var student = students.Find(s => s.Id == id);
            if (student == null) return NotFound();
            students.Remove(student);
            return Ok(student);
        }


        [HttpPut("{id}")]
        public ActionResult<List<Student>> UpdateStudent(int id, Student request)
        {
            var stu = students.Find(s => s.Id == id);
            if (stu == null) return NotFound();
            if (stu == null) return NotFound();
            stu.Name = request.Name;
            stu.Subject = request.Subject;
            stu.Age = request.Age;
            return Ok(stu);
        }


        [HttpPost]
        public ActionResult<List<Student>> AddStudent(Student student)
        {
            student.Id = students.Count == 0 ? 1 : students.Max(e => e.Id) + 1;
            students.Add(student);
            return Ok(student);
        }
    }
}
