//#include <iostream>
//#include <fstream>
//#include <cstdio>
//using namespace std;
//
//class Date;
//class Post;
//class Object;
//class Facebook;
//class Page;
//class User;
//class Activity;
//class Memory;
//class Comment;
//
//class Helper
//{
//public:
//
//	static char* StringConcatenateWithoutSpace(const char* str1, char* str2)
//	{
//		int i = 0;
//		while (str1[i] != '\0')
//		{
//			i++;
//		}
//		while (str2[i] != '\0')
//		{
//			i++;
//		}
//
//		char* str3 = new char[i + 1];
//		int j = 0;
//		while (str1[j] != '\0')
//		{
//			str3[j] = str1[j];
//			j++;
//		}
//		i = 0;
//		while (str2[i] != '\0')
//		{
//			str3[j] = str2[i];
//			i++; j++;
//		}
//
//		str3[j] = '\0';
//		return str3;
//	}
//
//	static int StringLenght(const char* str)
//	{
//		int i = 0;
//		while (str[i] != '\0')
//		{
//			i++;
//		}
//		return i;
//	}
//
//	static void StringCopy(char*& dest, const char* src)
//	{
//		int i = 0;
//		while (src[i] != '\0')
//		{
//			dest[i] = src[i];
//			i++;
//		}
//		dest[i] = '\0';
//	}
//
//	static char* GetStringFromBuffer(char* str)
//	{
//		int size_of_string = StringLenght(str);
//		char* string = new char[size_of_string + 1];    // +1 for null character
//		StringCopy(string, str);
//		return string;
//	}
//
//	static char* GetStringFromBuffer2(const char* str)
//	{
//		int size_of_string = StringLenght(str);
//		char* string = new char[size_of_string + 1];    // +1 for null character
//		StringCopy(string, str);
//		return string;
//	}
//
//	static bool SearchString(char* string, const char* substring)
//	{
//		for (int i = 0; string[i] != '\0'; i++)
//		{
//			if (string[i] == substring[0])     // frist letter matches
//			{
//				int k = i;
//				for (int j = 0; substring[j] != '\0'; j++)
//				{
//					if (substring[j] == string[k])
//					{
//						if (substring[j + 1] == '\0')     // last letter check
//							return true;
//						else
//							k++;
//					}
//					else
//						break;
//				}
//			}
//		}
//		return false;
//	}
//
//	static char* StringConcatenate(char* str1, char* str2)
//	{
//		int i = 0;
//		while (str1[i] != '\0')
//		{
//			i++;
//		}
//		i++;
//		while (str2[i] != '\0')
//		{
//			i++;
//		}
//
//		char* str3 = new char[i + 1];
//		int j = 0;
//		while (str1[j] != '\0')
//		{
//			str3[j] = str1[j];
//			j++;
//		}
//		str3[j] = ' ';
//		j++;
//		i = 0;
//		while (str2[i] != '\0')
//		{
//			str3[j] = str2[i];
//			i++; j++;
//		}
//
//		str3[j] = '\0';
//		return str3;
//
//	}
//
//	static int CompareString(char* str1, const char* str2)
//	{
//		int i = 0;
//		int j = 0;
//		while (str1[i] != '\0' && str2[j] != '\0')
//		{
//			if (str1[i] < str2[j])
//			{
//				return -1;
//			}
//
//			if (str1[i] > str2[j])
//			{
//				return 1;
//			}
//			i++;
//			j++;
//		}
//		if (str1[i] != '\0')
//			return 1;
//		if (str2[j] != '\0')
//			return -1;
//		return 0;    // out of loop will mean that both strings are equal
//	}
//};
//
//class Object
//{
//private:
//	char* id;
//public:
//	Object()    // constructor
//	{
//		id = 0;
//	}
//
//	virtual ~Object()     // destructor
//	{
//		if (id)
//		{
//			delete[] id;
//		}
//	}
//
//	virtual char* GetFullName() = 0;          // pure virtual
//
//	void ReadDataFromFile(ifstream& fin)
//	{
//		char temp[20];
//		fin >> temp;
//		id = Helper::GetStringFromBuffer(temp);
//	}
//
//	virtual void PrintListView() = 0;
//
//	char* GetID()
//	{
//		return id;
//	}
//
//	void PrintID()
//	{
//		cout << id;
//	}
//
//	virtual void AddPostToTimeline(Post* ptr) = 0;     // pure virtual
//};
//
//class Date
//{
//private:
//	int day, month, year;
//public:
//
//	static Date currdate;
//	static void SetCurrDate(int d, int m, int y)
//	{
//		currdate.day = d;
//		currdate.month = m;
//		currdate.year = y;
//	}
//	static Date GetCurrDate()
//	{
//		return currdate;
//	}
//
//	bool MemoryCheck(Date rhs)
//	{
//		if (day == rhs.day && month == rhs.month)
//			return true;
//		else
//			return false;
//	}
//
//	int diffofyear(Date rhs)
//	{
//		int diff = currdate.year - year;
//		return diff;
//	}
//
//	static Date prevdate()
//	{
//		Date yesterday(1, 1, 1);
//		yesterday.day = currdate.day - 1;
//		yesterday.month = currdate.month;
//		yesterday.year = currdate.year;
//		return yesterday;
//	}
//
//	Date(int d = 0, int m = 0, int y = 0)     //  overloaded default constructor
//	{
//		day = d;
//		month = m;
//		year = y;
//	}
//
//	void Print()
//	{
//		cout << day << "/" << month << "/" << year;
//	}
//
//	void SetDay(int d)
//	{
//		day = d;
//	}
//
//	void SetMonth(int m)
//	{
//		month = m;
//	}
//
//	void SetYear(int y)
//	{
//		year = y;
//	}
//
//	int GetDay()
//	{
//		return day;
//	}
//
//	int GetMonth()
//	{
//		return month;
//	}
//
//	int CompareDate(Date d)
//	{
//		if (year > d.year)
//			return 1;
//
//		if (year < d.year)
//			return -1;
//
//		if (year == year)
//		{
//			if (month > d.month)
//				return 1;
//			if (month < d.month)
//				return -1;
//			if (month == d.month)
//			{
//				if (day > d.day)
//					return 1;
//				if (day < d.day)
//					return -1;
//				if (day == day)
//					return 0;
//			}
//		}
//	}
//
//	int GetYear()
//	{
//		return year;
//	}
//
//	Date Increment_Month()
//	{
//		return Date(day, month + 1, year);
//	}
//
//	void ReadDataFromFile(ifstream& fin)
//	{
//		fin >> day;
//		fin >> month;
//		fin >> year;
//	}
//
//	~Date()
//	{
//	}
//};
//
//Date Date::currdate = Date(1, 1, 1);
//
//class Activity
//{
//private:
//	int type;    // type of activity (1 - 4)
//	char* value;        // what the user is doing for eg: Feeling Excited  -->   feeling is type and excited is value
//public:
//	Activity() // constructor
//	{
//		type = 0;
//		value = 0;
//	}
//
//	~Activity() // destructor
//	{
//		if (value)
//		{
//			delete[] value;
//		}
//	}
//
//	void Print()
//	{
//		if (type == 1)
//		{
//			cout << "is feeling " << value << endl;
//		}
//
//		if (type == 2)
//		{
//			cout << "is thinking about " << value << endl;
//		}
//
//		if (type == 3)
//		{
//			cout << "is making " << value << endl;
//		}
//
//		if (type == 4)
//		{
//			cout << "is celebrating " << value << endl;
//		}
//	}
//
//	void ReadDataFromFile(ifstream& fin)
//	{
//		char buffer[100];     // to store the value of activity
//
//		fin >> type;
//
//		fin.getline(buffer, 100);
//		value = Helper::GetStringFromBuffer(buffer);
//	}
//};
//
//class Comment
//{
//private:
//	char* comment_id;
//	char* post_id;
//	char* comment_text;
//	Object* commented_by;
//public:
//	static int comment_count;
//	Comment()
//	{
//		comment_id = 0;
//		post_id = 0;
//		comment_text = 0;
//		commented_by = 0;
//		comment_count++;
//	}
//
//	~Comment()               // destructor
//	{
//		if (comment_id)
//		{
//			delete comment_id;
//		}
//		if (post_id)
//		{
//			delete[] post_id;
//		}
//		if (comment_text)
//		{
//			delete[] comment_text;
//		}
//		/*	if (commented_by)
//			{
//				delete[] commented_by;
//			}*/
//	}
//
//	void SetValues(char* id, char* post, char* text, Object* comment)
//	{
//		comment_id = Helper::GetStringFromBuffer(id);
//		post_id = Helper::GetStringFromBuffer(post);
//		comment_text = Helper::GetStringFromBuffer(text);
//		if (commented_by == 0)
//			commented_by = comment;
//	}
//
//	void Print()
//	{
//		cout << '\t';
//		cout << commented_by->GetFullName() << " ";
//		cout << "wrote : " << comment_text << endl;
//	}
//};
//
//int Comment::comment_count = 0;
//
//class Post
//{
//private:
//	int post_type;       // either activity or simple text
//	char* post_id;
//	char* text;
//	Date shared_date;
//	Activity* activity;
//	Object* sharedby;
//	Object** likedby;
//	Comment** comments;
//public:
//	Post()         // constructor
//	{
//		post_type = 0;
//		post_id = 0;
//		text = 0;
//		activity = 0;
//		sharedby = 0;
//		likedby = new Object * [10];     // max 10 users an like the post
//		for (int i = 0; i < 10; i++)
//		{
//			likedby[i] = 0;
//		}
//		comments = new Comment * [10];
//		for (int i = 0; i < 10; i++)
//		{
//			comments[i] = 0;
//		}
//	}
//
//	Date GetSharedDate()
//	{
//		return shared_date;
//	}
//
//	Object* GetSharedBy()
//	{
//		return sharedby;
//	}
//
//	char* GetText()
//	{
//		return text;
//	}
//
//	Post(const char* id, const char* text1, Object* postedby)
//	{
//		post_type = 1;
//		post_id = Helper::GetStringFromBuffer2(id);
//		text = Helper::GetStringFromBuffer2(text1);
//		shared_date = Date::GetCurrDate();
//		sharedby = postedby;
//		activity = 0;
//		likedby = 0;    // max 10 users an like the post
//		comments = 0;
//	}
//
//	virtual ~Post()        // destructor
//	{
//		if (post_id)
//		{
//			delete[] post_id;
//		}
//		if (text)
//		{
//			delete[] text;
//		}
//		if (activity)
//		{
//			delete activity;
//		}
//		if (likedby)
//		{
//			delete[] likedby;
//		}
//		if (comments)
//		{
//			for (int i = 0; comments[i] != 0; i++)
//			{
//				if (comments[i])
//					delete comments[i];
//			}
//			delete[] comments;
//		}
//	}
//
//	void PostComment(Post* post, Object* commentedby, char* text)
//	{
//		char* id = 0;
//		Comment* comment = new Comment;
//		for (int i = 0; i < 10; i++)
//		{
//			char str[10];
//			sprintf_s(str, "%d", Comment::comment_count);
//			char* temp = new char[10];
//			temp = Helper::StringConcatenateWithoutSpace("c", str);
//			id = Helper::GetStringFromBuffer(temp);
//			break;
//		}
//		comment->SetValues(id, post->GetPostID(), text, commentedby);
//		post->AddComment(comment);
//	}
//
//
//	virtual void PrintPost(bool datecheck = true)
//	{
//
//		cout << endl << endl << "--";
//		cout << sharedby->GetFullName() << " ";
//		if (post_type == 1)
//		{
//			cout << "shared : ";
//			cout << text << endl;
//			if (datecheck == true)
//			{
//				cout << "("; shared_date.Print();
//				cout << ")" << endl << endl;
//			}
//			else
//				cout << endl << endl;
//			for (int i = 0; comments[i] != 0; i++)
//			{
//				comments[i]->Print();
//			}
//		}
//		else
//		{
//			activity->Print();
//			cout << text << endl;
//			if (datecheck == true)
//			{
//				cout << "("; shared_date.Print();
//				cout << ")" << endl << endl;
//			}
//			else
//				cout << endl << endl;
//			for (int i = 0; comments[i] != 0; i++)
//			{
//				comments[i]->Print();
//			}
//		}
//	}
//
//	void ViewRecent()
//	{
//		if (shared_date.CompareDate(Date::GetCurrDate()) == 0 || shared_date.CompareDate(Date::prevdate()) == 0)
//		{
//			PrintPost(false);
//		}
//	}
//
//	void ViewLikedList()
//	{
//		cout << "Post liked by :\n";
//		for (int i = 0; likedby[i] != 0; i++)
//		{
//			likedby[i]->PrintListView();
//		}
//	}
//
//	void ReadDataFromFile(ifstream& fin)
//	{
//		char buffer[100];
//
//		fin >> post_type;
//
//		fin.getline(buffer, 100);     // post id
//		post_id = Helper::GetStringFromBuffer(buffer);
//
//		shared_date.ReadDataFromFile(fin);
//
//		fin.getline(buffer, 100);    // for text
//		fin.getline(buffer, 100);    // for text
//		text = Helper::GetStringFromBuffer(buffer);
//
//		// // now checking if the post is simple or an activity
//
//		if (post_type == 2)
//		{
//			activity = new Activity;
//			activity->ReadDataFromFile(fin);
//		}
//		else
//			activity = 0;
//	}
//
//	void SetSharedBy(Object* ptr)
//	{
//		sharedby = ptr;
//	}
//
//	void SetLikedBy(Object* ptr)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (likedby[i] == 0)
//			{
//				likedby[i] = ptr;
//				break;
//			}
//		}
//	}
//
//	void ViewOldestPost()
//	{
//		if (shared_date.MemoryCheck(Date::GetCurrDate()) == 1)
//		{
//			cout << "On this day :\n";
//			int a = shared_date.diffofyear(Date::GetCurrDate());
//			cout << a << " years ago\n";
//			PrintPost();
//		}
//	}
//
//	char* GetPostID()
//	{
//		return post_id;
//	}
//
//	void AddComment(Comment* comment)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (comments[i] == 0)
//			{
//				comments[i] = comment;
//				break;
//			}
//		}
//	}
//};
//
//
//class Memory : public Post
//{
//private:
//	Post* original_post;
//public:
//	Memory(Post* post, const char* id, const char* text, Object* postedby) : Post(id, text, postedby)
//	{
//		original_post = post;
//	}
//
//	~Memory()     // destructor
//	{
//	}
//
//	void PrintPost(bool datecheck = true)
//	{
//		Date d1 = Post::GetSharedDate();
//		Object* ptr = Post::GetSharedBy();
//		char* textptr = Post::GetText();
//
//		cout << "~~~";
//		cout << ptr->GetFullName() << " ";
//		cout << "shared a memory~~~" << endl;
//		cout << textptr << endl;
//		cout << "(";
//		d1.Print();
//		cout << ")\n";
//		original_post->PrintPost();
//	}
//};
//
//
//class Page : public Object
//{
//private:
//	char* title;         // name of page
//	Post** timeline;
//public:
//	Page()        // constructor for initialisation
//	{
//		title = 0;
//		timeline = new Post * [10];  // max. no. of posts per person
//		for (int i = 0; i < 10; i++)
//		{
//			timeline[i] = 0;
//		}
//	}
//	~Page()      // destructor
//	{
//		if (title)
//			delete[] title;
//
//		if (timeline)
//		{
//			for (int i = 0; i < 10; i++)
//			{
//				if (timeline[i])
//					delete timeline[i];
//			}
//			delete[] timeline;
//		}
//	}
//
//	void ViewTimeline()
//	{
//		cout << title << " -- TIMELINE\n";
//		for (int i = 0; timeline[i] != 0; i++)
//		{
//			timeline[i]->PrintPost();
//		}
//	}
//
//
//
//	char* GetFullName()
//	{
//		return title;
//	}
//
//	void ViewHome()
//	{
//		for (int i = 0; timeline[i] != 0; i++)
//		{
//			timeline[i]->ViewRecent();
//			cout << endl;
//		}
//	}
//
//	void ReadDataFromFile(ifstream& fin)
//	{
//		char temp[80];
//		// for pageid
//		Object::ReadDataFromFile(fin);
//
//		fin.getline(temp, 80);
//		title = Helper::GetStringFromBuffer(temp);
//	}
//	void Print()
//	{
//		cout << GetID() << '\t' << title << endl;
//	}
//
//	void AddPostToTimeline(Post* ptr)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (timeline[i] == 0)      // pointing to null
//			{
//				timeline[i] = ptr;
//				break;
//			}
//		}
//	}
//
//	void PrintListView()
//	{
//		PrintID();
//		cout << title << endl;
//	}
//};
//
//class User : public Object
//{
//	/* // IMPORTANT for one user :      1). Max 10 friends
//										2). Max 10 liked pages
//	*/
//private:
//	char* firstname;
//	char* lastname;
//	Page** likedpages;
//	User** friendlist;
//	Post** timeline;
//public:
//	User()             // constructor for initialisation
//	{
//		firstname = 0;
//		lastname = 0;
//		likedpages = new Page * [10];
//		for (int i = 0; i < 10; i++)
//		{
//			likedpages[i] = 0;
//		}
//		friendlist = new User * [10];
//		for (int i = 0; i < 10; i++)
//		{
//			friendlist[i] = 0;
//		}
//
//		timeline = new Post * [10];  // max. no. of posts per person
//		for (int i = 0; i < 10; i++)
//		{
//			timeline[i] = 0;
//		}
//
//	}
//	~User()          // destructor
//	{
//		if (firstname)
//		{
//			delete[] firstname;
//		}
//		if (lastname)
//		{
//			delete[] lastname;
//		}
//		if (likedpages)
//		{
//			delete[] likedpages;
//		}
//		if (friendlist)
//		{
//			delete[] friendlist;
//		}
//
//		if (timeline)
//		{
//			for (int i = 0; i < 10; i++)
//			{
//				delete[] timeline[i];
//			}
//			delete[] timeline;
//		}
//	}
//
//	char* GetFullName()
//	{
//		char* fullname = Helper::StringConcatenate(firstname, lastname);
//		return fullname;
//	}
//
//	void AddPostToTimeline(Post* ptr)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (timeline[i] == 0)      // pointing to null
//			{
//				timeline[i] = ptr;
//				break;
//			}
//		}
//	}
//
//	void SeeMemory()
//	{
//		cout << firstname << " " << lastname << " --MEMORY\n";
//		for (int i = 0; timeline[i] != 0; i++)
//		{
//			timeline[i]->ViewOldestPost();
//		}
//	}
//
//	void PrintListView()
//	{
//		PrintID();
//		cout << " " << firstname << " " << lastname << endl;
//	}
//
//	void ViewTimeline()
//	{
//		cout << firstname << " " << lastname << " -- TIMELINE\n";
//		for (int i = 0; timeline[i] != 0; i++)
//		{
//			timeline[i]->PrintPost();
//		}
//	}
//
//	void ReadDataFromFile(ifstream& fin)
//	{
//		char temp[20];
//
//		Object::ReadDataFromFile(fin);     // reading ids
//
//		fin >> temp;   // fname
//		firstname = Helper::GetStringFromBuffer(temp);
//
//		fin >> temp; // lname
//		lastname = Helper::GetStringFromBuffer(temp);
//	}
//	void LikePage(Page* id)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (likedpages[i] == 0)
//			{
//				likedpages[i] = id;
//				break;
//			}
//		}
//	}
//	void AddFriend(User* id)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (friendlist[i] == 0)
//			{
//				friendlist[i] = id;
//				break;
//			}
//		}
//	}
//
//
//	void Print()
//	{
//		cout << GetID() << '\t' << firstname << ' ' << lastname << endl;
//	}
//	void ViewFriendList()
//	{
//		cout << firstname << " " << lastname << " - FriendList : " << endl;
//		for (int i = 0; friendlist[i] != 0; i++)
//		{
//			friendlist[i]->Print();
//		}
//	}
//
//	void ViewLikedPages()
//	{
//		cout << firstname << " " << lastname << " - LikedPages : " << endl;
//		for (int i = 0; likedpages[i] != 0; i++)
//		{
//			likedpages[i]->Print();
//		}
//	}
//
//	void ViewHome()
//	{
//		cout << firstname << " " << lastname << " - HomePage : " << endl;
//		for (int i = 0; friendlist[i] != 0; i++)
//		{
//			int j = 0;
//			for (j = 0; friendlist[i]->timeline[j] != 0; j++)
//			{
//				friendlist[i]->timeline[j]->ViewRecent();
//			}
//		}
//
//		for (int i = 0; likedpages[i] != 0; i++)
//		{
//			likedpages[i]->ViewHome();
//		}
//	}
//
//};
//
//
//class Facebook
//{
//private:
//	Page** pages;
//	User** users;
//	Post** posts;
//	//Comment** comments;
//public:
//	Facebook()      // constructor for initialisation
//	{
//		pages = 0;
//		users = 0;
//		posts = 0;
//		//comments = 0;
//	}
//	~Facebook()      // destructor
//	{
//		if (pages)
//		{
//			for (int i = 0; i < 12; i++)
//			{
//				if (pages[i])
//					delete pages[i];
//			}
//			delete[] pages;
//		}
//
//		if (users)
//		{
//			for (int i = 0; i < 20; i++)
//			{
//				if (users[i])
//					delete users[i];
//			}
//			delete[] users;
//		}
//		if (posts)
//		{
//			delete[] posts;
//		}
//	}
//
//	void LoadPagesFromFile(const char* filename)
//	{
//		ifstream fin(filename);
//		if (fin)
//		{
//			int total;
//			fin >> total;       // total number of pages;     12
//			pages = new Page * [total];
//			for (int i = 0; i < total; i++)
//			{
//				pages[i] = new Page;
//				pages[i]->ReadDataFromFile(fin);
//			}
//		}
//		fin.close();             // closing pages files
//	}
//	void LoadUsersFromFile(const char* filename)
//	{
//		ifstream fin(filename);
//		if (fin)
//		{
//			int total;
//			fin >> total;           // total no. of users 20
//			// // first we have to save all userIDs and first names and last names
//			users = new User * [total];               // users is a private member of Facebook class
//			char*** tempfriendID = new char** [total];
//			int j = 0;
//			for (int i = 0; i < total; i++)
//			{
//				users[i] = new User;
//				users[i]->ReadDataFromFile(fin);
//				tempfriendID[i] = new char* [10];
//				char* pageid = new char[10];
//				char* temp = new char[20];
//				while (1)         // loop for storing friends
//				{
//					fin >> temp;
//					if (Helper::CompareString(temp, "-1") == 0)  // checking if temp is equal to -1
//					{
//						tempfriendID[i][j] = 0;
//						j = 0;
//						break;
//					}
//					else
//					{
//						tempfriendID[i][j] = Helper::GetStringFromBuffer(temp);
//						j++;
//					}
//				}
//				while (1)     // loop for storing likedpages
//				{
//					fin >> temp;
//					if (Helper::CompareString(temp, "-1") == 0)    // checking if temp is equal to -1 
//					{
//						pageid = 0;
//						break;
//					}
//					else
//					{
//						pageid = Helper::GetStringFromBuffer(temp);
//						Page* page_ptr = 0;
//						page_ptr = SearchPageByID(pageid);
//						users[i]->LikePage(page_ptr);
//					}
//				}
//				delete[] pageid;
//				delete[] temp;
//			}
//
//			for (int i = 0; i < total; i++)
//			{
//				for (int k = 0; tempfriendID[i][k] != 0; k++)
//				{
//					User* user_ptr = 0;
//					user_ptr = SearchUserByID(tempfriendID[i][k]);
//					users[i]->AddFriend(user_ptr);
//				}
//			}
//		}
//		fin.close();     // closing users file
//	}
//
//	void LoadPostsFromFile(const char* filename)
//	{
//		ifstream fin(filename);
//
//		if (fin)
//		{
//			int total_posts;
//			fin >> total_posts;
//
//			posts = new Post * [total_posts];   // total 10 posts memory allocated accordingly
//
//			for (int i = 0; i < total_posts; i++)
//			{
//				posts[i] = new Post;
//				posts[i]->ReadDataFromFile(fin);
//				char temp[10]; // for user id or page id
//				fin >> temp;
//				Object* sharedby = SearchObjectByID(temp);
//				posts[i]->SetSharedBy(sharedby);
//				sharedby->AddPostToTimeline(posts[i]);
//
//				while (1)
//				{
//					fin >> temp;
//					if (Helper::CompareString(temp, "-1") == 0)
//					{
//						break;
//					}
//					Object* ptr = SearchObjectByID(temp);
//					posts[i]->SetLikedBy(ptr);
//				}
//			}
//		}
//		fin.close();    // closing posts file
//	}
//
//	void LoadCommentsFromFile(const char* filename)
//	{
//		ifstream fin(filename);
//
//		if (fin)
//		{
//			int totalcomments;
//			fin >> totalcomments;
//			//comments = new Comment * [totalcomments];
//			char* id;
//			char* postid;
//			char* user;
//			char* text;
//			for (int i = 0; i < totalcomments; i++)
//			{
//				Comment* comments = new Comment;
//				char temp[100];
//				fin >> temp;
//				id = Helper::GetStringFromBuffer(temp);
//				fin >> temp;
//				postid = Helper::GetStringFromBuffer(temp);
//				Post* postptr = SearchPostByID(postid);
//				postptr->AddComment(comments);
//				fin >> temp;
//				user = Helper::GetStringFromBuffer(temp);
//				Object* commentptr = SearchObjectByID(user);
//				fin.getline(temp, 80);
//				text = Helper::GetStringFromBuffer(temp);
//				comments->SetValues(id, postid, text, commentptr);
//				delete[] id; id = 0;
//				delete[] postid; postid = 0;
//				delete[] user; user = 0;
//				delete[] text; text = 0;
//			}
//
//		}
//	}
//
//	void Load()
//	{
//		LoadPagesFromFile("SocialNetworkPages.txt");
//		LoadUsersFromFile("SocialNetworkUsers.txt");
//		LoadPostsFromFile("SocialNetworkPosts.txt");
//		LoadCommentsFromFile("SocialNetworkComments.txt");
//	}
//	Page* SearchPageByID(const char* id)
//	{
//		for (int i = 0; i < 12; i++)
//		{
//			if (Helper::SearchString(pages[i]->GetID(), id) == 1)
//			{
//				return pages[i];
//			}
//		}
//	}
//	User* SearchUserByID(const char* id)
//	{
//		for (int i = 0; i < 20; i++)
//		{
//			if (Helper::SearchString(users[i]->GetID(), id) == 1)
//			{
//				return users[i];
//			}
//		}
//	}
//
//	void ShareMemory(const char* id, const char* text, Object* person)
//	{
//		Post* ptr = SearchPostByID(id);
//		Memory* memoryptr = new Memory(ptr, id, text, person);
//		person->AddPostToTimeline(memoryptr);
//	}
//
//	Post* SearchPostByID(const char* id)
//	{
//		for (int i = 0; i < 11; i++) // loop for 11 as there r total 11 posts
//		{
//			if (Helper::SearchString(posts[i]->GetPostID(), id) == 1)
//			{
//				return posts[i];
//			}
//		}
//	}
//
//	Object* SearchObjectByID(char* id)
//	{
//		for (int i = 0; i < 12; i++)
//		{
//			if (Helper::SearchString(pages[i]->GetID(), id) == 1)
//			{
//				return pages[i];
//			}
//		}
//
//		for (int i = 0; i < 20; i++)
//		{
//			if (Helper::SearchString(users[i]->GetID(), id) == 1)
//			{
//				return users[i];
//			}
//		}
//	}
//};
//
//int main()
//{
//	Facebook fb;
//	fb.Load();
//	User* curruser = fb.SearchUserByID("u7");
//	curruser->ViewFriendList();
//	curruser->ViewLikedPages();    // phase 1
//
//	Date::SetCurrDate(15, 11, 2017);
//	curruser->ViewHome();
//	curruser->ViewTimeline();
//
//	Post* post1;
//	char p1[] = "post5";
//	post1 = fb.SearchPostByID(p1);
//	post1->ViewLikedList();
//	post1->SetLikedBy(curruser);
//	post1->ViewLikedList();
//
//	Post* post2;
//	Post* post3;
//	char p2[] = "post8";
//	char p3[] = "post4";
//	post2 = fb.SearchPostByID(p2);
//	post3 = fb.SearchPostByID(p3);
//	post2->PrintPost();
//	post3->PrintPost();
//	char c1[] = "\tThanks for wishing me";
//	char c2[] = "\tOsamah is legend";
//	post2->PostComment(post2, curruser, c1);
//	post3->PostComment(post3, curruser, c2);
//	post2->PrintPost();
//	post3->PrintPost();
//
//	curruser->SeeMemory();
//	fb.ShareMemory("post10", "Never thought i would be specialist in this field...", curruser);
//	curruser->ViewTimeline();
//
//	Page* currpage = fb.SearchPageByID("p1");
//	currpage->ViewTimeline();
//	system("pause");
//	return 0;
//}