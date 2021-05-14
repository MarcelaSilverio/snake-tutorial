#pragma once 

#include <SFML/System/Time.hpp>

namespace Engine{

    class state{

    public:
        int State(){};
        virtual ~state(){};

        virtual void Init() = 0;
        virtual void ProcessInput() = 0;
        virtual void Update(sf::Time deltaTime) = 0;
        virtual void Draw() = 0;

        virtual void Pause(){};
        virtual void Start(){};

    };

}// namespace Engine