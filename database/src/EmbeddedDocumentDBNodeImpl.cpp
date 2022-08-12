/*
    Copyright (c) 2018-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/diplodocusdb/embedded-document-db/blob/main/LICENSE.txt
*/

#include "EmbeddedDocumentDBNodeImpl.hpp"
#include "EmbeddedDocumentDBImpl.hpp"

using namespace DiplodocusDB;

EmbeddedDocumentDBNodeImpl::EmbeddedDocumentDBNodeImpl()
    : m_name("/")
{
}

EmbeddedDocumentDBNodeImpl::EmbeddedDocumentDBNodeImpl(const NodeID& parentNodeID, const NodeID& nodeID,
    const std::string& name)
    : m_name(name), m_parentNodeID(parentNodeID), m_nodeID(nodeID)
{
}

EmbeddedDocumentDBNodeImpl::EmbeddedDocumentDBNodeImpl(const NodeID& parentNodeID, const SiblingNodeRecordGroup& node)
    : m_name(node.name()), m_value(node.value()), m_parentNodeID(parentNodeID), m_nodeID(node.nodeID())
{
}

const std::string& EmbeddedDocumentDBNodeImpl::name() const
{
    return m_name;
}

const Value& EmbeddedDocumentDBNodeImpl::value() const
{
    return m_value;
}

Value& EmbeddedDocumentDBNodeImpl::value()
{
    return m_value;
}

bool EmbeddedDocumentDBNodeImpl::isRoot() const
{
    return (m_name == "/");
}

const NodeID& EmbeddedDocumentDBNodeImpl::parentNodeID() const
{
    return m_parentNodeID;
}

const NodeID& EmbeddedDocumentDBNodeImpl::nodeID() const
{
    return m_nodeID;
}