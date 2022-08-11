/*
    Copyright (c) 2020-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/diplodocusdb/embedded-document-db/blob/main/LICENSE.txt
*/

#ifndef GUARD_DIPLODOCUSDB_TREEDB_CORE_EMBEDDEDDOCUMENTDBERRORCATEGORY_HPP
#define GUARD_DIPLODOCUSDB_TREEDB_CORE_EMBEDDEDDOCUMENTDBERRORCATEGORY_HPP

#include <Ishiko/Errors.hpp>

namespace DiplodocusDB
{

class EmbeddedDocumentDBErrorCategory : public Ishiko::ErrorCategory
{
public:
    enum Value
    {
        generic_error = -1
    };

    static const EmbeddedDocumentDBErrorCategory& Get() noexcept;

    const char* name() const noexcept override;
    std::ostream& streamOut(int value, std::ostream& os) const override;

private:
    EmbeddedDocumentDBErrorCategory() noexcept = default;
};

void Fail(Ishiko::Error& error, EmbeddedDocumentDBErrorCategory::Value value) noexcept;
void Fail(Ishiko::Error& error, EmbeddedDocumentDBErrorCategory::Value value, const std::string& message,
    const char* file, int line) noexcept;

}

#endif
