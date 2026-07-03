using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using WebApplication1.Controllers.Models;

namespace WebApplication1.Controllers
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
            return Ok(student);
        }

        [HttpDelete("{id}")]
        public ActionResult<List<Student>> DeleteStudent(int id)
        {
            var student = students.Find(s => s.Id == id);
            students.Remove(student);
            return Ok(student);
        }
        

        [HttpPost]
            public ActionResult<List<Student>> AddStudent(Student student)
        {
            students.Add(student);
            return Ok(students);
        }
    }
}