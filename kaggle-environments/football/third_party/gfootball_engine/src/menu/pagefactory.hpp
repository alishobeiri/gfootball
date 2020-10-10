// Copyright 2019 Google LLC & Bastiaan Konings
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// written by bastiaan konings schuiling 2008 - 2015
// this work is public domain. the code is undocumented, scruffy, untested, and should generally not be used for anything important.
// i do not offer support, so don't ask. to be used for inspiration :)

#ifndef _HPP_PAGEFACTORY
#define _HPP_PAGEFACTORY

#include "../utils/gui2/page.hpp"

using namespace blunted;

enum e_PageID {
  e_PageID_Game,
  e_PageID_LoadingMatch,
};

class PageFactory : public Gui2PageFactory {

  public:
    using Gui2PageFactory::CreatePage;
    virtual Gui2Page *CreatePage(const Gui2PageData &pageData);
    virtual Gui2Page *GetMostRecentlyCreatedPage();
};

#endif
