#pragma once

#include <System/IAppLoopController.h>

namespace Babylon::System
{

/**
 * Класс управления основным циклом приложения
 */
class DrawListController final : public IAppLoopController
{
public:
    /**
     * Запускает основной цикл
     */
    void Run() override;

private:
    std::vector<IAppLoopControllerPtr> _controllers;
};

} // namespace Babylon::System
