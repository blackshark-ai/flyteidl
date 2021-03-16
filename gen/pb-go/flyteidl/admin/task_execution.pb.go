// Code generated by protoc-gen-go. DO NOT EDIT.
// source: flyteidl/admin/task_execution.proto

package admin

import (
	fmt "fmt"
	core "github.com/flyteorg/flyteidl/gen/pb-go/flyteidl/core"
	event "github.com/flyteorg/flyteidl/gen/pb-go/flyteidl/event"
	proto "github.com/golang/protobuf/proto"
	duration "github.com/golang/protobuf/ptypes/duration"
	_struct "github.com/golang/protobuf/ptypes/struct"
	timestamp "github.com/golang/protobuf/ptypes/timestamp"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

// A message used to fetch a single task execution entity.
type TaskExecutionGetRequest struct {
	// Unique identifier for the task execution.
	Id                   *core.TaskExecutionIdentifier `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                      `json:"-"`
	XXX_unrecognized     []byte                        `json:"-"`
	XXX_sizecache        int32                         `json:"-"`
}

func (m *TaskExecutionGetRequest) Reset()         { *m = TaskExecutionGetRequest{} }
func (m *TaskExecutionGetRequest) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionGetRequest) ProtoMessage()    {}
func (*TaskExecutionGetRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{0}
}

func (m *TaskExecutionGetRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionGetRequest.Unmarshal(m, b)
}
func (m *TaskExecutionGetRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionGetRequest.Marshal(b, m, deterministic)
}
func (m *TaskExecutionGetRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionGetRequest.Merge(m, src)
}
func (m *TaskExecutionGetRequest) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionGetRequest.Size(m)
}
func (m *TaskExecutionGetRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionGetRequest.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionGetRequest proto.InternalMessageInfo

func (m *TaskExecutionGetRequest) GetId() *core.TaskExecutionIdentifier {
	if m != nil {
		return m.Id
	}
	return nil
}

// Represents a request structure to retrieve a list of task execution entities.
type TaskExecutionListRequest struct {
	// Indicates the node execution to filter by.
	NodeExecutionId *core.NodeExecutionIdentifier `protobuf:"bytes,1,opt,name=node_execution_id,json=nodeExecutionId,proto3" json:"node_execution_id,omitempty"`
	// Indicates the number of resources to be returned.
	Limit uint32 `protobuf:"varint,2,opt,name=limit,proto3" json:"limit,omitempty"`
	// In the case of multiple pages of results, the server-provided token can be used to fetch the next page
	// in a query.
	// +optional
	Token string `protobuf:"bytes,3,opt,name=token,proto3" json:"token,omitempty"`
	// Indicates a list of filters passed as string.
	// More info on constructing filters : <Link>
	// +optional
	Filters string `protobuf:"bytes,4,opt,name=filters,proto3" json:"filters,omitempty"`
	// Sort ordering for returned list.
	// +optional
	SortBy               *Sort    `protobuf:"bytes,5,opt,name=sort_by,json=sortBy,proto3" json:"sort_by,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *TaskExecutionListRequest) Reset()         { *m = TaskExecutionListRequest{} }
func (m *TaskExecutionListRequest) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionListRequest) ProtoMessage()    {}
func (*TaskExecutionListRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{1}
}

func (m *TaskExecutionListRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionListRequest.Unmarshal(m, b)
}
func (m *TaskExecutionListRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionListRequest.Marshal(b, m, deterministic)
}
func (m *TaskExecutionListRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionListRequest.Merge(m, src)
}
func (m *TaskExecutionListRequest) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionListRequest.Size(m)
}
func (m *TaskExecutionListRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionListRequest.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionListRequest proto.InternalMessageInfo

func (m *TaskExecutionListRequest) GetNodeExecutionId() *core.NodeExecutionIdentifier {
	if m != nil {
		return m.NodeExecutionId
	}
	return nil
}

func (m *TaskExecutionListRequest) GetLimit() uint32 {
	if m != nil {
		return m.Limit
	}
	return 0
}

func (m *TaskExecutionListRequest) GetToken() string {
	if m != nil {
		return m.Token
	}
	return ""
}

func (m *TaskExecutionListRequest) GetFilters() string {
	if m != nil {
		return m.Filters
	}
	return ""
}

func (m *TaskExecutionListRequest) GetSortBy() *Sort {
	if m != nil {
		return m.SortBy
	}
	return nil
}

// Encapsulates all details for a single task execution entity.
// A task execution represents an instantiated task, including all inputs and additional
// metadata as well as computed results included state, outputs, and duration-based attributes.
type TaskExecution struct {
	// Unique identifier for the task execution.
	Id *core.TaskExecutionIdentifier `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	// Path to remote data store where input blob is stored.
	InputUri string `protobuf:"bytes,2,opt,name=input_uri,json=inputUri,proto3" json:"input_uri,omitempty"`
	// Task execution details and results.
	Closure *TaskExecutionClosure `protobuf:"bytes,3,opt,name=closure,proto3" json:"closure,omitempty"`
	// Whether this task spawned nodes.
	IsParent             bool     `protobuf:"varint,4,opt,name=is_parent,json=isParent,proto3" json:"is_parent,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *TaskExecution) Reset()         { *m = TaskExecution{} }
func (m *TaskExecution) String() string { return proto.CompactTextString(m) }
func (*TaskExecution) ProtoMessage()    {}
func (*TaskExecution) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{2}
}

func (m *TaskExecution) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecution.Unmarshal(m, b)
}
func (m *TaskExecution) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecution.Marshal(b, m, deterministic)
}
func (m *TaskExecution) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecution.Merge(m, src)
}
func (m *TaskExecution) XXX_Size() int {
	return xxx_messageInfo_TaskExecution.Size(m)
}
func (m *TaskExecution) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecution.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecution proto.InternalMessageInfo

func (m *TaskExecution) GetId() *core.TaskExecutionIdentifier {
	if m != nil {
		return m.Id
	}
	return nil
}

func (m *TaskExecution) GetInputUri() string {
	if m != nil {
		return m.InputUri
	}
	return ""
}

func (m *TaskExecution) GetClosure() *TaskExecutionClosure {
	if m != nil {
		return m.Closure
	}
	return nil
}

func (m *TaskExecution) GetIsParent() bool {
	if m != nil {
		return m.IsParent
	}
	return false
}

// Response structure for a query to list of task execution entities.
type TaskExecutionList struct {
	TaskExecutions []*TaskExecution `protobuf:"bytes,1,rep,name=task_executions,json=taskExecutions,proto3" json:"task_executions,omitempty"`
	// In the case of multiple pages of results, the server-provided token can be used to fetch the next page
	// in a query. If there are no more results, this value will be empty.
	Token                string   `protobuf:"bytes,2,opt,name=token,proto3" json:"token,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *TaskExecutionList) Reset()         { *m = TaskExecutionList{} }
func (m *TaskExecutionList) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionList) ProtoMessage()    {}
func (*TaskExecutionList) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{3}
}

func (m *TaskExecutionList) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionList.Unmarshal(m, b)
}
func (m *TaskExecutionList) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionList.Marshal(b, m, deterministic)
}
func (m *TaskExecutionList) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionList.Merge(m, src)
}
func (m *TaskExecutionList) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionList.Size(m)
}
func (m *TaskExecutionList) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionList.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionList proto.InternalMessageInfo

func (m *TaskExecutionList) GetTaskExecutions() []*TaskExecution {
	if m != nil {
		return m.TaskExecutions
	}
	return nil
}

func (m *TaskExecutionList) GetToken() string {
	if m != nil {
		return m.Token
	}
	return ""
}

// Container for task execution details and results.
type TaskExecutionClosure struct {
	// Types that are valid to be assigned to OutputResult:
	//	*TaskExecutionClosure_OutputUri
	//	*TaskExecutionClosure_Error
	OutputResult isTaskExecutionClosure_OutputResult `protobuf_oneof:"output_result"`
	// The last recorded phase for this task execution.
	Phase core.TaskExecution_Phase `protobuf:"varint,3,opt,name=phase,proto3,enum=flyteidl.core.TaskExecution_Phase" json:"phase,omitempty"`
	// Detailed log information output by the task execution.
	Logs []*core.TaskLog `protobuf:"bytes,4,rep,name=logs,proto3" json:"logs,omitempty"`
	// Time at which the task execution began running.
	StartedAt *timestamp.Timestamp `protobuf:"bytes,5,opt,name=started_at,json=startedAt,proto3" json:"started_at,omitempty"`
	// The amount of time the task execution spent running.
	Duration *duration.Duration `protobuf:"bytes,6,opt,name=duration,proto3" json:"duration,omitempty"`
	// Time at which the task execution was created.
	CreatedAt *timestamp.Timestamp `protobuf:"bytes,7,opt,name=created_at,json=createdAt,proto3" json:"created_at,omitempty"`
	// Time at which the task execution was last updated.
	UpdatedAt *timestamp.Timestamp `protobuf:"bytes,8,opt,name=updated_at,json=updatedAt,proto3" json:"updated_at,omitempty"`
	// Custom data specific to the task plugin.
	CustomInfo *_struct.Struct `protobuf:"bytes,9,opt,name=custom_info,json=customInfo,proto3" json:"custom_info,omitempty"`
	// If there is an explanation for the most recent phase transition, the reason will capture it.
	Reason string `protobuf:"bytes,10,opt,name=reason,proto3" json:"reason,omitempty"`
	// A predefined yet extensible Task type identifier.
	Type string `protobuf:"bytes,11,opt,name=type,proto3" json:"type,omitempty"`
	// Metadata around how a task was executed.
	Metadata             *event.TaskExecutionMetadata `protobuf:"bytes,16,opt,name=metadata,proto3" json:"metadata,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                     `json:"-"`
	XXX_unrecognized     []byte                       `json:"-"`
	XXX_sizecache        int32                        `json:"-"`
}

func (m *TaskExecutionClosure) Reset()         { *m = TaskExecutionClosure{} }
func (m *TaskExecutionClosure) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionClosure) ProtoMessage()    {}
func (*TaskExecutionClosure) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{4}
}

func (m *TaskExecutionClosure) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionClosure.Unmarshal(m, b)
}
func (m *TaskExecutionClosure) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionClosure.Marshal(b, m, deterministic)
}
func (m *TaskExecutionClosure) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionClosure.Merge(m, src)
}
func (m *TaskExecutionClosure) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionClosure.Size(m)
}
func (m *TaskExecutionClosure) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionClosure.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionClosure proto.InternalMessageInfo

type isTaskExecutionClosure_OutputResult interface {
	isTaskExecutionClosure_OutputResult()
}

type TaskExecutionClosure_OutputUri struct {
	OutputUri string `protobuf:"bytes,1,opt,name=output_uri,json=outputUri,proto3,oneof"`
}

type TaskExecutionClosure_Error struct {
	Error *core.ExecutionError `protobuf:"bytes,2,opt,name=error,proto3,oneof"`
}

func (*TaskExecutionClosure_OutputUri) isTaskExecutionClosure_OutputResult() {}

func (*TaskExecutionClosure_Error) isTaskExecutionClosure_OutputResult() {}

func (m *TaskExecutionClosure) GetOutputResult() isTaskExecutionClosure_OutputResult {
	if m != nil {
		return m.OutputResult
	}
	return nil
}

func (m *TaskExecutionClosure) GetOutputUri() string {
	if x, ok := m.GetOutputResult().(*TaskExecutionClosure_OutputUri); ok {
		return x.OutputUri
	}
	return ""
}

func (m *TaskExecutionClosure) GetError() *core.ExecutionError {
	if x, ok := m.GetOutputResult().(*TaskExecutionClosure_Error); ok {
		return x.Error
	}
	return nil
}

func (m *TaskExecutionClosure) GetPhase() core.TaskExecution_Phase {
	if m != nil {
		return m.Phase
	}
	return core.TaskExecution_UNDEFINED
}

func (m *TaskExecutionClosure) GetLogs() []*core.TaskLog {
	if m != nil {
		return m.Logs
	}
	return nil
}

func (m *TaskExecutionClosure) GetStartedAt() *timestamp.Timestamp {
	if m != nil {
		return m.StartedAt
	}
	return nil
}

func (m *TaskExecutionClosure) GetDuration() *duration.Duration {
	if m != nil {
		return m.Duration
	}
	return nil
}

func (m *TaskExecutionClosure) GetCreatedAt() *timestamp.Timestamp {
	if m != nil {
		return m.CreatedAt
	}
	return nil
}

func (m *TaskExecutionClosure) GetUpdatedAt() *timestamp.Timestamp {
	if m != nil {
		return m.UpdatedAt
	}
	return nil
}

func (m *TaskExecutionClosure) GetCustomInfo() *_struct.Struct {
	if m != nil {
		return m.CustomInfo
	}
	return nil
}

func (m *TaskExecutionClosure) GetReason() string {
	if m != nil {
		return m.Reason
	}
	return ""
}

func (m *TaskExecutionClosure) GetType() string {
	if m != nil {
		return m.Type
	}
	return ""
}

func (m *TaskExecutionClosure) GetMetadata() *event.TaskExecutionMetadata {
	if m != nil {
		return m.Metadata
	}
	return nil
}

// XXX_OneofWrappers is for the internal use of the proto package.
func (*TaskExecutionClosure) XXX_OneofWrappers() []interface{} {
	return []interface{}{
		(*TaskExecutionClosure_OutputUri)(nil),
		(*TaskExecutionClosure_Error)(nil),
	}
}

// Request structure to fetch inputs and output urls for a task execution.
type TaskExecutionGetDataRequest struct {
	// The identifier of the task execution for which to fetch inputs and outputs.
	Id                   *core.TaskExecutionIdentifier `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                      `json:"-"`
	XXX_unrecognized     []byte                        `json:"-"`
	XXX_sizecache        int32                         `json:"-"`
}

func (m *TaskExecutionGetDataRequest) Reset()         { *m = TaskExecutionGetDataRequest{} }
func (m *TaskExecutionGetDataRequest) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionGetDataRequest) ProtoMessage()    {}
func (*TaskExecutionGetDataRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{5}
}

func (m *TaskExecutionGetDataRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionGetDataRequest.Unmarshal(m, b)
}
func (m *TaskExecutionGetDataRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionGetDataRequest.Marshal(b, m, deterministic)
}
func (m *TaskExecutionGetDataRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionGetDataRequest.Merge(m, src)
}
func (m *TaskExecutionGetDataRequest) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionGetDataRequest.Size(m)
}
func (m *TaskExecutionGetDataRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionGetDataRequest.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionGetDataRequest proto.InternalMessageInfo

func (m *TaskExecutionGetDataRequest) GetId() *core.TaskExecutionIdentifier {
	if m != nil {
		return m.Id
	}
	return nil
}

// Response structure for TaskExecutionGetDataRequest which contains inputs and outputs for a task execution.
type TaskExecutionGetDataResponse struct {
	// Signed url to fetch a core.LiteralMap of task execution inputs.
	Inputs *UrlBlob `protobuf:"bytes,1,opt,name=inputs,proto3" json:"inputs,omitempty"`
	// Signed url to fetch a core.LiteralMap of task execution outputs.
	Outputs *UrlBlob `protobuf:"bytes,2,opt,name=outputs,proto3" json:"outputs,omitempty"`
	// Optional, full_inputs will only be populated if they are under a configured size threshold.
	FullInputs *core.LiteralMap `protobuf:"bytes,3,opt,name=full_inputs,json=fullInputs,proto3" json:"full_inputs,omitempty"`
	// Optional, full_outputs will only be populated if they are under a configured size threshold.
	FullOutputs          *core.LiteralMap `protobuf:"bytes,4,opt,name=full_outputs,json=fullOutputs,proto3" json:"full_outputs,omitempty"`
	XXX_NoUnkeyedLiteral struct{}         `json:"-"`
	XXX_unrecognized     []byte           `json:"-"`
	XXX_sizecache        int32            `json:"-"`
}

func (m *TaskExecutionGetDataResponse) Reset()         { *m = TaskExecutionGetDataResponse{} }
func (m *TaskExecutionGetDataResponse) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionGetDataResponse) ProtoMessage()    {}
func (*TaskExecutionGetDataResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{6}
}

func (m *TaskExecutionGetDataResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionGetDataResponse.Unmarshal(m, b)
}
func (m *TaskExecutionGetDataResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionGetDataResponse.Marshal(b, m, deterministic)
}
func (m *TaskExecutionGetDataResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionGetDataResponse.Merge(m, src)
}
func (m *TaskExecutionGetDataResponse) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionGetDataResponse.Size(m)
}
func (m *TaskExecutionGetDataResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionGetDataResponse.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionGetDataResponse proto.InternalMessageInfo

func (m *TaskExecutionGetDataResponse) GetInputs() *UrlBlob {
	if m != nil {
		return m.Inputs
	}
	return nil
}

func (m *TaskExecutionGetDataResponse) GetOutputs() *UrlBlob {
	if m != nil {
		return m.Outputs
	}
	return nil
}

func (m *TaskExecutionGetDataResponse) GetFullInputs() *core.LiteralMap {
	if m != nil {
		return m.FullInputs
	}
	return nil
}

func (m *TaskExecutionGetDataResponse) GetFullOutputs() *core.LiteralMap {
	if m != nil {
		return m.FullOutputs
	}
	return nil
}

func init() {
	proto.RegisterType((*TaskExecutionGetRequest)(nil), "flyteidl.admin.TaskExecutionGetRequest")
	proto.RegisterType((*TaskExecutionListRequest)(nil), "flyteidl.admin.TaskExecutionListRequest")
	proto.RegisterType((*TaskExecution)(nil), "flyteidl.admin.TaskExecution")
	proto.RegisterType((*TaskExecutionList)(nil), "flyteidl.admin.TaskExecutionList")
	proto.RegisterType((*TaskExecutionClosure)(nil), "flyteidl.admin.TaskExecutionClosure")
	proto.RegisterType((*TaskExecutionGetDataRequest)(nil), "flyteidl.admin.TaskExecutionGetDataRequest")
	proto.RegisterType((*TaskExecutionGetDataResponse)(nil), "flyteidl.admin.TaskExecutionGetDataResponse")
}

func init() {
	proto.RegisterFile("flyteidl/admin/task_execution.proto", fileDescriptor_8cde4c3aa101642e)
}

var fileDescriptor_8cde4c3aa101642e = []byte{
	// 805 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xa4, 0x55, 0x5f, 0x6f, 0xdc, 0x44,
	0x10, 0xaf, 0x93, 0xcb, 0xfd, 0x99, 0x23, 0x09, 0x5d, 0x45, 0x8d, 0xb9, 0xa4, 0x34, 0x3a, 0xfe,
	0xe8, 0x84, 0x54, 0x5b, 0x1c, 0x0a, 0x14, 0x84, 0x90, 0xee, 0x68, 0xa1, 0x91, 0x52, 0x28, 0xdb,
	0xe6, 0x85, 0x17, 0x6b, 0xcf, 0xde, 0x73, 0x57, 0xb1, 0xbd, 0xee, 0xee, 0x18, 0x71, 0x1f, 0x8f,
	0xcf, 0xc2, 0x77, 0xe0, 0x89, 0x07, 0xe4, 0xf5, 0xda, 0x89, 0x2f, 0xd7, 0x44, 0xa2, 0x2f, 0xa7,
	0x9b, 0x9d, 0xdf, 0x6f, 0x7e, 0x33, 0xb3, 0x33, 0x6b, 0xf8, 0x64, 0x99, 0xac, 0x90, 0x8b, 0x28,
	0xf1, 0x59, 0x94, 0x8a, 0xcc, 0x47, 0xa6, 0x2f, 0x03, 0xfe, 0x27, 0x0f, 0x0b, 0x14, 0x32, 0xf3,
	0x72, 0x25, 0x51, 0x92, 0xbd, 0x1a, 0xe4, 0x19, 0xd0, 0xe8, 0x68, 0x8d, 0x14, 0xca, 0x34, 0xad,
	0xc1, 0xa3, 0x87, 0x8d, 0x33, 0x94, 0x8a, 0xfb, 0x6b, 0xb1, 0x46, 0x1f, 0xb7, 0xdd, 0x22, 0xe2,
	0x19, 0x8a, 0xa5, 0xe0, 0xca, 0xfa, 0x8f, 0xdb, 0xfe, 0x44, 0x20, 0x57, 0x2c, 0xd1, 0xd6, 0x3b,
	0x6a, 0xbc, 0xfc, 0x0f, 0x9e, 0x61, 0xf5, 0x6b, 0x7d, 0x8f, 0x62, 0x29, 0xe3, 0x84, 0xfb, 0xc6,
	0x5a, 0x14, 0x4b, 0x1f, 0x45, 0xca, 0x35, 0xb2, 0x34, 0xaf, 0xa5, 0xd7, 0x01, 0x51, 0xa1, 0xd8,
	0xb5, 0xd4, 0x8e, 0xd7, 0xfd, 0x1a, 0x55, 0x11, 0xda, 0xf0, 0xe3, 0xdf, 0xe0, 0xf0, 0x35, 0xd3,
	0x97, 0xcf, 0xea, 0x7a, 0x7e, 0xe6, 0x48, 0xf9, 0xdb, 0x82, 0x6b, 0x24, 0x5f, 0xc3, 0x96, 0x88,
	0x5c, 0xe7, 0xc4, 0x99, 0x0c, 0xa7, 0x9f, 0x7b, 0x4d, 0xb3, 0xca, 0x02, 0xbc, 0x16, 0xe7, 0xac,
	0xa9, 0x96, 0x6e, 0x89, 0x68, 0xfc, 0xb7, 0x03, 0x6e, 0xcb, 0x7f, 0x2e, 0x74, 0x13, 0x94, 0xc2,
	0xfd, 0x4c, 0x46, 0xfc, 0xea, 0x32, 0x82, 0x77, 0x6a, 0xfc, 0x22, 0x23, 0xbe, 0x49, 0x63, 0x3f,
	0x6b, 0x3b, 0xc8, 0x01, 0xec, 0x24, 0x22, 0x15, 0xe8, 0x6e, 0x9d, 0x38, 0x93, 0x5d, 0x5a, 0x19,
	0xe5, 0x29, 0xca, 0x4b, 0x9e, 0xb9, 0xdb, 0x27, 0xce, 0x64, 0x40, 0x2b, 0x83, 0xb8, 0xd0, 0x5b,
	0x8a, 0x04, 0xb9, 0xd2, 0x6e, 0xc7, 0x9c, 0xd7, 0x26, 0x79, 0x0c, 0x3d, 0x2d, 0x15, 0x06, 0x8b,
	0x95, 0xbb, 0x63, 0xf2, 0x39, 0xf0, 0xda, 0x03, 0xe2, 0xbd, 0x92, 0x0a, 0x69, 0xb7, 0x04, 0xcd,
	0x57, 0xe3, 0xbf, 0x1c, 0xd8, 0x6d, 0x55, 0xf9, 0x7f, 0xfb, 0x45, 0x8e, 0x60, 0x20, 0xb2, 0xbc,
	0xc0, 0xa0, 0x50, 0xc2, 0x94, 0x30, 0xa0, 0x7d, 0x73, 0x70, 0xa1, 0x04, 0xf9, 0x01, 0x7a, 0x61,
	0x22, 0x75, 0xa1, 0xb8, 0xa9, 0x63, 0x38, 0xfd, 0x74, 0x3d, 0xab, 0x56, 0xe8, 0x1f, 0x2b, 0x2c,
	0xad, 0x49, 0x26, 0xb8, 0x0e, 0x72, 0xa6, 0x78, 0x86, 0xa6, 0xe2, 0x3e, 0xed, 0x0b, 0xfd, 0xd2,
	0xd8, 0xe3, 0xb7, 0x70, 0xff, 0xc6, 0x45, 0x91, 0x9f, 0x60, 0xbf, 0xbd, 0x2e, 0xda, 0x75, 0x4e,
	0xb6, 0x27, 0xc3, 0xe9, 0xc3, 0x5b, 0x95, 0xe9, 0x1e, 0x5e, 0x37, 0xf5, 0x55, 0xff, 0xb7, 0xae,
	0xf5, 0x7f, 0xfc, 0x4f, 0x07, 0x0e, 0x36, 0x65, 0x4c, 0x1e, 0x01, 0xc8, 0x02, 0xeb, 0x36, 0x94,
	0x5d, 0x1c, 0x3c, 0xbf, 0x47, 0x07, 0xd5, 0x59, 0xd9, 0x89, 0x53, 0xd8, 0xe1, 0x4a, 0x49, 0x65,
	0xe2, 0xb5, 0xb2, 0x31, 0x1d, 0x6e, 0x02, 0x3e, 0x2b, 0x41, 0xcf, 0xef, 0xd1, 0x0a, 0x4d, 0x9e,
	0xc0, 0x4e, 0xfe, 0x86, 0xe9, 0xaa, 0x7d, 0x7b, 0xd3, 0xf1, 0x6d, 0x17, 0xe3, 0xbd, 0x2c, 0x91,
	0xb4, 0x22, 0x90, 0x2f, 0xa0, 0x93, 0xc8, 0xb8, 0x9c, 0x93, 0xb2, 0xfa, 0x07, 0x1b, 0x88, 0xe7,
	0x32, 0xa6, 0x06, 0x43, 0xbe, 0x05, 0xd0, 0xc8, 0x14, 0xf2, 0x28, 0x60, 0x68, 0xe7, 0x67, 0xe4,
	0x55, 0x9b, 0xe7, 0xd5, 0x9b, 0xe7, 0xbd, 0xae, 0x57, 0x97, 0x0e, 0x2c, 0x7a, 0x86, 0xe4, 0x14,
	0xfa, 0xf5, 0xc6, 0xba, 0x5d, 0x43, 0xfc, 0xe8, 0x06, 0xf1, 0xa9, 0x05, 0xd0, 0x06, 0x5a, 0x2a,
	0x86, 0x8a, 0x33, 0xab, 0xd8, 0xbb, 0x5b, 0xd1, 0xa2, 0x67, 0x58, 0x52, 0x8b, 0x3c, 0xaa, 0xa9,
	0xfd, 0xbb, 0xa9, 0x16, 0x3d, 0x43, 0xf2, 0x04, 0x86, 0x61, 0xa1, 0x51, 0xa6, 0x81, 0xc8, 0x96,
	0xd2, 0x1d, 0x18, 0xee, 0xe1, 0x0d, 0xee, 0x2b, 0xf3, 0xc4, 0x50, 0xa8, 0xb0, 0x67, 0xd9, 0x52,
	0x92, 0x07, 0xd0, 0x55, 0x9c, 0x69, 0x99, 0xb9, 0x60, 0xe6, 0xc1, 0x5a, 0x84, 0x40, 0x07, 0x57,
	0x39, 0x77, 0x87, 0xe6, 0xd4, 0xfc, 0x27, 0x33, 0xe8, 0xa7, 0x1c, 0x59, 0xc4, 0x90, 0xb9, 0x1f,
	0x1a, 0x89, 0xcf, 0xae, 0xba, 0x5f, 0x3d, 0x8e, 0xad, 0x7b, 0x7b, 0x61, 0xc1, 0xb4, 0xa1, 0xcd,
	0xf7, 0x61, 0xd7, 0x8e, 0x93, 0xe2, 0xba, 0x48, 0x70, 0x7c, 0x01, 0x47, 0xeb, 0x0f, 0xdd, 0xd3,
	0x92, 0xf2, 0x9e, 0x8f, 0xdd, 0xbf, 0x0e, 0x1c, 0x6f, 0x8e, 0xab, 0x73, 0x99, 0x69, 0x4e, 0x7c,
	0xe8, 0x9a, 0x65, 0xd6, 0x36, 0xf8, 0xe1, 0xfa, 0x16, 0x5d, 0xa8, 0x64, 0x9e, 0xc8, 0x05, 0xb5,
	0x30, 0xf2, 0x25, 0xf4, 0xaa, 0xcc, 0xb5, 0x9d, 0xf4, 0x77, 0x32, 0x6a, 0x1c, 0xf9, 0x0e, 0x86,
	0xcb, 0x22, 0x49, 0x02, 0x2b, 0xb4, 0x6d, 0xa7, 0xa8, 0x5d, 0xc5, 0x79, 0xf5, 0xcd, 0x79, 0xc1,
	0x72, 0x0a, 0x25, 0xfa, 0xac, 0x92, 0xfb, 0x1e, 0x3e, 0x30, 0xdc, 0x5a, 0xb3, 0x73, 0x17, 0xd9,
	0x48, 0xfd, 0x5a, 0xa1, 0xe7, 0xdf, 0xfc, 0x7e, 0x1a, 0x0b, 0x7c, 0x53, 0x2c, 0xbc, 0x50, 0xa6,
	0xbe, 0xe1, 0x48, 0x15, 0xfb, 0xcd, 0xf7, 0x2c, 0xe6, 0x99, 0x9f, 0x2f, 0x1e, 0xc7, 0xd2, 0x6f,
	0x7f, 0x5c, 0x17, 0x5d, 0x33, 0x2b, 0x5f, 0xfd, 0x17, 0x00, 0x00, 0xff, 0xff, 0x96, 0x89, 0xbf,
	0xa4, 0xaa, 0x07, 0x00, 0x00,
}
