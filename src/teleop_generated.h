// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TELEOP_TELEOP_H_
#define FLATBUFFERS_GENERATED_TELEOP_TELEOP_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 25 &&
              FLATBUFFERS_VERSION_MINOR == 2 &&
              FLATBUFFERS_VERSION_REVISION == 10,
             "Non-compatible flatbuffers version included");

namespace Teleop {

struct Vector2D;
struct Vector2DBuilder;

struct Quaternion;
struct QuaternionBuilder;

struct ControlCommand;
struct ControlCommandBuilder;

struct SensorData;
struct SensorDataBuilder;

struct AuthRequest;
struct AuthRequestBuilder;

struct AuthResponse;
struct AuthResponseBuilder;

enum CommandType : int8_t {
  CommandType_MOVE = 0,
  CommandType_STOP = 1,
  CommandType_EMERGENCY_STOP = 2,
  CommandType_CONFIGURE = 3,
  CommandType_MIN = CommandType_MOVE,
  CommandType_MAX = CommandType_CONFIGURE
};

inline const CommandType (&EnumValuesCommandType())[4] {
  static const CommandType values[] = {
    CommandType_MOVE,
    CommandType_STOP,
    CommandType_EMERGENCY_STOP,
    CommandType_CONFIGURE
  };
  return values;
}

inline const char * const *EnumNamesCommandType() {
  static const char * const names[5] = {
    "MOVE",
    "STOP",
    "EMERGENCY_STOP",
    "CONFIGURE",
    nullptr
  };
  return names;
}

inline const char *EnumNameCommandType(CommandType e) {
  if (::flatbuffers::IsOutRange(e, CommandType_MOVE, CommandType_CONFIGURE)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesCommandType()[index];
}

enum SensorType : int8_t {
  SensorType_POSITION = 0,
  SensorType_BATTERY = 1,
  SensorType_TEMPERATURE = 2,
  SensorType_ERROR = 3,
  SensorType_MIN = SensorType_POSITION,
  SensorType_MAX = SensorType_ERROR
};

inline const SensorType (&EnumValuesSensorType())[4] {
  static const SensorType values[] = {
    SensorType_POSITION,
    SensorType_BATTERY,
    SensorType_TEMPERATURE,
    SensorType_ERROR
  };
  return values;
}

inline const char * const *EnumNamesSensorType() {
  static const char * const names[5] = {
    "POSITION",
    "BATTERY",
    "TEMPERATURE",
    "ERROR",
    nullptr
  };
  return names;
}

inline const char *EnumNameSensorType(SensorType e) {
  if (::flatbuffers::IsOutRange(e, SensorType_POSITION, SensorType_ERROR)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesSensorType()[index];
}

struct Vector2D FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Vector2DBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_X = 4,
    VT_Y = 6
  };
  float x() const {
    return GetField<float>(VT_X, 0.0f);
  }
  float y() const {
    return GetField<float>(VT_Y, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_X, 4) &&
           VerifyField<float>(verifier, VT_Y, 4) &&
           verifier.EndTable();
  }
};

struct Vector2DBuilder {
  typedef Vector2D Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_x(float x) {
    fbb_.AddElement<float>(Vector2D::VT_X, x, 0.0f);
  }
  void add_y(float y) {
    fbb_.AddElement<float>(Vector2D::VT_Y, y, 0.0f);
  }
  explicit Vector2DBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Vector2D> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Vector2D>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Vector2D> CreateVector2D(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    float x = 0.0f,
    float y = 0.0f) {
  Vector2DBuilder builder_(_fbb);
  builder_.add_y(y);
  builder_.add_x(x);
  return builder_.Finish();
}

struct Quaternion FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef QuaternionBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_X = 4,
    VT_Y = 6,
    VT_Z = 8,
    VT_W = 10
  };
  float x() const {
    return GetField<float>(VT_X, 0.0f);
  }
  float y() const {
    return GetField<float>(VT_Y, 0.0f);
  }
  float z() const {
    return GetField<float>(VT_Z, 0.0f);
  }
  float w() const {
    return GetField<float>(VT_W, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_X, 4) &&
           VerifyField<float>(verifier, VT_Y, 4) &&
           VerifyField<float>(verifier, VT_Z, 4) &&
           VerifyField<float>(verifier, VT_W, 4) &&
           verifier.EndTable();
  }
};

struct QuaternionBuilder {
  typedef Quaternion Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_x(float x) {
    fbb_.AddElement<float>(Quaternion::VT_X, x, 0.0f);
  }
  void add_y(float y) {
    fbb_.AddElement<float>(Quaternion::VT_Y, y, 0.0f);
  }
  void add_z(float z) {
    fbb_.AddElement<float>(Quaternion::VT_Z, z, 0.0f);
  }
  void add_w(float w) {
    fbb_.AddElement<float>(Quaternion::VT_W, w, 0.0f);
  }
  explicit QuaternionBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Quaternion> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Quaternion>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Quaternion> CreateQuaternion(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    float x = 0.0f,
    float y = 0.0f,
    float z = 0.0f,
    float w = 0.0f) {
  QuaternionBuilder builder_(_fbb);
  builder_.add_w(w);
  builder_.add_z(z);
  builder_.add_y(y);
  builder_.add_x(x);
  return builder_.Finish();
}

struct ControlCommand FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ControlCommandBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_COMMAND_TYPE = 4,
    VT_LINEAR_VELOCITY = 6,
    VT_ANGULAR_VELOCITY = 8,
    VT_TARGET_POSITION = 10,
    VT_TIMESTAMP = 12,
    VT_SEQUENCE_NUMBER = 14,
    VT_CLIENT_ID = 16,
    VT_AUTH_TOKEN = 18
  };
  Teleop::CommandType command_type() const {
    return static_cast<Teleop::CommandType>(GetField<int8_t>(VT_COMMAND_TYPE, 0));
  }
  float linear_velocity() const {
    return GetField<float>(VT_LINEAR_VELOCITY, 0.0f);
  }
  float angular_velocity() const {
    return GetField<float>(VT_ANGULAR_VELOCITY, 0.0f);
  }
  const Teleop::Vector2D *target_position() const {
    return GetPointer<const Teleop::Vector2D *>(VT_TARGET_POSITION);
  }
  uint64_t timestamp() const {
    return GetField<uint64_t>(VT_TIMESTAMP, 0);
  }
  uint32_t sequence_number() const {
    return GetField<uint32_t>(VT_SEQUENCE_NUMBER, 0);
  }
  const ::flatbuffers::String *client_id() const {
    return GetPointer<const ::flatbuffers::String *>(VT_CLIENT_ID);
  }
  const ::flatbuffers::String *auth_token() const {
    return GetPointer<const ::flatbuffers::String *>(VT_AUTH_TOKEN);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_COMMAND_TYPE, 1) &&
           VerifyField<float>(verifier, VT_LINEAR_VELOCITY, 4) &&
           VerifyField<float>(verifier, VT_ANGULAR_VELOCITY, 4) &&
           VerifyOffset(verifier, VT_TARGET_POSITION) &&
           verifier.VerifyTable(target_position()) &&
           VerifyField<uint64_t>(verifier, VT_TIMESTAMP, 8) &&
           VerifyField<uint32_t>(verifier, VT_SEQUENCE_NUMBER, 4) &&
           VerifyOffset(verifier, VT_CLIENT_ID) &&
           verifier.VerifyString(client_id()) &&
           VerifyOffset(verifier, VT_AUTH_TOKEN) &&
           verifier.VerifyString(auth_token()) &&
           verifier.EndTable();
  }
};

struct ControlCommandBuilder {
  typedef ControlCommand Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_command_type(Teleop::CommandType command_type) {
    fbb_.AddElement<int8_t>(ControlCommand::VT_COMMAND_TYPE, static_cast<int8_t>(command_type), 0);
  }
  void add_linear_velocity(float linear_velocity) {
    fbb_.AddElement<float>(ControlCommand::VT_LINEAR_VELOCITY, linear_velocity, 0.0f);
  }
  void add_angular_velocity(float angular_velocity) {
    fbb_.AddElement<float>(ControlCommand::VT_ANGULAR_VELOCITY, angular_velocity, 0.0f);
  }
  void add_target_position(::flatbuffers::Offset<Teleop::Vector2D> target_position) {
    fbb_.AddOffset(ControlCommand::VT_TARGET_POSITION, target_position);
  }
  void add_timestamp(uint64_t timestamp) {
    fbb_.AddElement<uint64_t>(ControlCommand::VT_TIMESTAMP, timestamp, 0);
  }
  void add_sequence_number(uint32_t sequence_number) {
    fbb_.AddElement<uint32_t>(ControlCommand::VT_SEQUENCE_NUMBER, sequence_number, 0);
  }
  void add_client_id(::flatbuffers::Offset<::flatbuffers::String> client_id) {
    fbb_.AddOffset(ControlCommand::VT_CLIENT_ID, client_id);
  }
  void add_auth_token(::flatbuffers::Offset<::flatbuffers::String> auth_token) {
    fbb_.AddOffset(ControlCommand::VT_AUTH_TOKEN, auth_token);
  }
  explicit ControlCommandBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ControlCommand> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ControlCommand>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<ControlCommand> CreateControlCommand(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    Teleop::CommandType command_type = Teleop::CommandType_MOVE,
    float linear_velocity = 0.0f,
    float angular_velocity = 0.0f,
    ::flatbuffers::Offset<Teleop::Vector2D> target_position = 0,
    uint64_t timestamp = 0,
    uint32_t sequence_number = 0,
    ::flatbuffers::Offset<::flatbuffers::String> client_id = 0,
    ::flatbuffers::Offset<::flatbuffers::String> auth_token = 0) {
  ControlCommandBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_auth_token(auth_token);
  builder_.add_client_id(client_id);
  builder_.add_sequence_number(sequence_number);
  builder_.add_target_position(target_position);
  builder_.add_angular_velocity(angular_velocity);
  builder_.add_linear_velocity(linear_velocity);
  builder_.add_command_type(command_type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<ControlCommand> CreateControlCommandDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    Teleop::CommandType command_type = Teleop::CommandType_MOVE,
    float linear_velocity = 0.0f,
    float angular_velocity = 0.0f,
    ::flatbuffers::Offset<Teleop::Vector2D> target_position = 0,
    uint64_t timestamp = 0,
    uint32_t sequence_number = 0,
    const char *client_id = nullptr,
    const char *auth_token = nullptr) {
  auto client_id__ = client_id ? _fbb.CreateString(client_id) : 0;
  auto auth_token__ = auth_token ? _fbb.CreateString(auth_token) : 0;
  return Teleop::CreateControlCommand(
      _fbb,
      command_type,
      linear_velocity,
      angular_velocity,
      target_position,
      timestamp,
      sequence_number,
      client_id__,
      auth_token__);
}

struct SensorData FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef SensorDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SENSOR_TYPE = 4,
    VT_POSITION = 6,
    VT_ORIENTATION = 8,
    VT_BATTERY_LEVEL = 10,
    VT_TEMPERATURE = 12,
    VT_ERROR_CODE = 14,
    VT_ERROR_MESSAGE = 16,
    VT_TIMESTAMP = 18,
    VT_SEQUENCE_NUMBER = 20,
    VT_ROBOT_ID = 22
  };
  Teleop::SensorType sensor_type() const {
    return static_cast<Teleop::SensorType>(GetField<int8_t>(VT_SENSOR_TYPE, 0));
  }
  const Teleop::Vector2D *position() const {
    return GetPointer<const Teleop::Vector2D *>(VT_POSITION);
  }
  const Teleop::Quaternion *orientation() const {
    return GetPointer<const Teleop::Quaternion *>(VT_ORIENTATION);
  }
  float battery_level() const {
    return GetField<float>(VT_BATTERY_LEVEL, 0.0f);
  }
  float temperature() const {
    return GetField<float>(VT_TEMPERATURE, 0.0f);
  }
  int32_t error_code() const {
    return GetField<int32_t>(VT_ERROR_CODE, 0);
  }
  const ::flatbuffers::String *error_message() const {
    return GetPointer<const ::flatbuffers::String *>(VT_ERROR_MESSAGE);
  }
  uint64_t timestamp() const {
    return GetField<uint64_t>(VT_TIMESTAMP, 0);
  }
  uint32_t sequence_number() const {
    return GetField<uint32_t>(VT_SEQUENCE_NUMBER, 0);
  }
  const ::flatbuffers::String *robot_id() const {
    return GetPointer<const ::flatbuffers::String *>(VT_ROBOT_ID);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_SENSOR_TYPE, 1) &&
           VerifyOffset(verifier, VT_POSITION) &&
           verifier.VerifyTable(position()) &&
           VerifyOffset(verifier, VT_ORIENTATION) &&
           verifier.VerifyTable(orientation()) &&
           VerifyField<float>(verifier, VT_BATTERY_LEVEL, 4) &&
           VerifyField<float>(verifier, VT_TEMPERATURE, 4) &&
           VerifyField<int32_t>(verifier, VT_ERROR_CODE, 4) &&
           VerifyOffset(verifier, VT_ERROR_MESSAGE) &&
           verifier.VerifyString(error_message()) &&
           VerifyField<uint64_t>(verifier, VT_TIMESTAMP, 8) &&
           VerifyField<uint32_t>(verifier, VT_SEQUENCE_NUMBER, 4) &&
           VerifyOffset(verifier, VT_ROBOT_ID) &&
           verifier.VerifyString(robot_id()) &&
           verifier.EndTable();
  }
};

struct SensorDataBuilder {
  typedef SensorData Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_sensor_type(Teleop::SensorType sensor_type) {
    fbb_.AddElement<int8_t>(SensorData::VT_SENSOR_TYPE, static_cast<int8_t>(sensor_type), 0);
  }
  void add_position(::flatbuffers::Offset<Teleop::Vector2D> position) {
    fbb_.AddOffset(SensorData::VT_POSITION, position);
  }
  void add_orientation(::flatbuffers::Offset<Teleop::Quaternion> orientation) {
    fbb_.AddOffset(SensorData::VT_ORIENTATION, orientation);
  }
  void add_battery_level(float battery_level) {
    fbb_.AddElement<float>(SensorData::VT_BATTERY_LEVEL, battery_level, 0.0f);
  }
  void add_temperature(float temperature) {
    fbb_.AddElement<float>(SensorData::VT_TEMPERATURE, temperature, 0.0f);
  }
  void add_error_code(int32_t error_code) {
    fbb_.AddElement<int32_t>(SensorData::VT_ERROR_CODE, error_code, 0);
  }
  void add_error_message(::flatbuffers::Offset<::flatbuffers::String> error_message) {
    fbb_.AddOffset(SensorData::VT_ERROR_MESSAGE, error_message);
  }
  void add_timestamp(uint64_t timestamp) {
    fbb_.AddElement<uint64_t>(SensorData::VT_TIMESTAMP, timestamp, 0);
  }
  void add_sequence_number(uint32_t sequence_number) {
    fbb_.AddElement<uint32_t>(SensorData::VT_SEQUENCE_NUMBER, sequence_number, 0);
  }
  void add_robot_id(::flatbuffers::Offset<::flatbuffers::String> robot_id) {
    fbb_.AddOffset(SensorData::VT_ROBOT_ID, robot_id);
  }
  explicit SensorDataBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<SensorData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<SensorData>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<SensorData> CreateSensorData(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    Teleop::SensorType sensor_type = Teleop::SensorType_POSITION,
    ::flatbuffers::Offset<Teleop::Vector2D> position = 0,
    ::flatbuffers::Offset<Teleop::Quaternion> orientation = 0,
    float battery_level = 0.0f,
    float temperature = 0.0f,
    int32_t error_code = 0,
    ::flatbuffers::Offset<::flatbuffers::String> error_message = 0,
    uint64_t timestamp = 0,
    uint32_t sequence_number = 0,
    ::flatbuffers::Offset<::flatbuffers::String> robot_id = 0) {
  SensorDataBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_robot_id(robot_id);
  builder_.add_sequence_number(sequence_number);
  builder_.add_error_message(error_message);
  builder_.add_error_code(error_code);
  builder_.add_temperature(temperature);
  builder_.add_battery_level(battery_level);
  builder_.add_orientation(orientation);
  builder_.add_position(position);
  builder_.add_sensor_type(sensor_type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<SensorData> CreateSensorDataDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    Teleop::SensorType sensor_type = Teleop::SensorType_POSITION,
    ::flatbuffers::Offset<Teleop::Vector2D> position = 0,
    ::flatbuffers::Offset<Teleop::Quaternion> orientation = 0,
    float battery_level = 0.0f,
    float temperature = 0.0f,
    int32_t error_code = 0,
    const char *error_message = nullptr,
    uint64_t timestamp = 0,
    uint32_t sequence_number = 0,
    const char *robot_id = nullptr) {
  auto error_message__ = error_message ? _fbb.CreateString(error_message) : 0;
  auto robot_id__ = robot_id ? _fbb.CreateString(robot_id) : 0;
  return Teleop::CreateSensorData(
      _fbb,
      sensor_type,
      position,
      orientation,
      battery_level,
      temperature,
      error_code,
      error_message__,
      timestamp,
      sequence_number,
      robot_id__);
}

struct AuthRequest FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef AuthRequestBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CLIENT_ID = 4,
    VT_ROBOT_ID = 6,
    VT_PUBLIC_KEY = 8,
    VT_TIMESTAMP = 10,
    VT_NONCE = 12
  };
  const ::flatbuffers::String *client_id() const {
    return GetPointer<const ::flatbuffers::String *>(VT_CLIENT_ID);
  }
  const ::flatbuffers::String *robot_id() const {
    return GetPointer<const ::flatbuffers::String *>(VT_ROBOT_ID);
  }
  const ::flatbuffers::String *public_key() const {
    return GetPointer<const ::flatbuffers::String *>(VT_PUBLIC_KEY);
  }
  uint64_t timestamp() const {
    return GetField<uint64_t>(VT_TIMESTAMP, 0);
  }
  const ::flatbuffers::String *nonce() const {
    return GetPointer<const ::flatbuffers::String *>(VT_NONCE);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_CLIENT_ID) &&
           verifier.VerifyString(client_id()) &&
           VerifyOffset(verifier, VT_ROBOT_ID) &&
           verifier.VerifyString(robot_id()) &&
           VerifyOffset(verifier, VT_PUBLIC_KEY) &&
           verifier.VerifyString(public_key()) &&
           VerifyField<uint64_t>(verifier, VT_TIMESTAMP, 8) &&
           VerifyOffset(verifier, VT_NONCE) &&
           verifier.VerifyString(nonce()) &&
           verifier.EndTable();
  }
};

struct AuthRequestBuilder {
  typedef AuthRequest Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_client_id(::flatbuffers::Offset<::flatbuffers::String> client_id) {
    fbb_.AddOffset(AuthRequest::VT_CLIENT_ID, client_id);
  }
  void add_robot_id(::flatbuffers::Offset<::flatbuffers::String> robot_id) {
    fbb_.AddOffset(AuthRequest::VT_ROBOT_ID, robot_id);
  }
  void add_public_key(::flatbuffers::Offset<::flatbuffers::String> public_key) {
    fbb_.AddOffset(AuthRequest::VT_PUBLIC_KEY, public_key);
  }
  void add_timestamp(uint64_t timestamp) {
    fbb_.AddElement<uint64_t>(AuthRequest::VT_TIMESTAMP, timestamp, 0);
  }
  void add_nonce(::flatbuffers::Offset<::flatbuffers::String> nonce) {
    fbb_.AddOffset(AuthRequest::VT_NONCE, nonce);
  }
  explicit AuthRequestBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<AuthRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<AuthRequest>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<AuthRequest> CreateAuthRequest(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> client_id = 0,
    ::flatbuffers::Offset<::flatbuffers::String> robot_id = 0,
    ::flatbuffers::Offset<::flatbuffers::String> public_key = 0,
    uint64_t timestamp = 0,
    ::flatbuffers::Offset<::flatbuffers::String> nonce = 0) {
  AuthRequestBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_nonce(nonce);
  builder_.add_public_key(public_key);
  builder_.add_robot_id(robot_id);
  builder_.add_client_id(client_id);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<AuthRequest> CreateAuthRequestDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *client_id = nullptr,
    const char *robot_id = nullptr,
    const char *public_key = nullptr,
    uint64_t timestamp = 0,
    const char *nonce = nullptr) {
  auto client_id__ = client_id ? _fbb.CreateString(client_id) : 0;
  auto robot_id__ = robot_id ? _fbb.CreateString(robot_id) : 0;
  auto public_key__ = public_key ? _fbb.CreateString(public_key) : 0;
  auto nonce__ = nonce ? _fbb.CreateString(nonce) : 0;
  return Teleop::CreateAuthRequest(
      _fbb,
      client_id__,
      robot_id__,
      public_key__,
      timestamp,
      nonce__);
}

struct AuthResponse FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef AuthResponseBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SUCCESS = 4,
    VT_AUTH_TOKEN = 6,
    VT_EXPIRES_AT = 8,
    VT_ERROR_MESSAGE = 10
  };
  bool success() const {
    return GetField<uint8_t>(VT_SUCCESS, 0) != 0;
  }
  const ::flatbuffers::String *auth_token() const {
    return GetPointer<const ::flatbuffers::String *>(VT_AUTH_TOKEN);
  }
  uint64_t expires_at() const {
    return GetField<uint64_t>(VT_EXPIRES_AT, 0);
  }
  const ::flatbuffers::String *error_message() const {
    return GetPointer<const ::flatbuffers::String *>(VT_ERROR_MESSAGE);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS, 1) &&
           VerifyOffset(verifier, VT_AUTH_TOKEN) &&
           verifier.VerifyString(auth_token()) &&
           VerifyField<uint64_t>(verifier, VT_EXPIRES_AT, 8) &&
           VerifyOffset(verifier, VT_ERROR_MESSAGE) &&
           verifier.VerifyString(error_message()) &&
           verifier.EndTable();
  }
};

struct AuthResponseBuilder {
  typedef AuthResponse Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_success(bool success) {
    fbb_.AddElement<uint8_t>(AuthResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0);
  }
  void add_auth_token(::flatbuffers::Offset<::flatbuffers::String> auth_token) {
    fbb_.AddOffset(AuthResponse::VT_AUTH_TOKEN, auth_token);
  }
  void add_expires_at(uint64_t expires_at) {
    fbb_.AddElement<uint64_t>(AuthResponse::VT_EXPIRES_AT, expires_at, 0);
  }
  void add_error_message(::flatbuffers::Offset<::flatbuffers::String> error_message) {
    fbb_.AddOffset(AuthResponse::VT_ERROR_MESSAGE, error_message);
  }
  explicit AuthResponseBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<AuthResponse> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<AuthResponse>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<AuthResponse> CreateAuthResponse(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    ::flatbuffers::Offset<::flatbuffers::String> auth_token = 0,
    uint64_t expires_at = 0,
    ::flatbuffers::Offset<::flatbuffers::String> error_message = 0) {
  AuthResponseBuilder builder_(_fbb);
  builder_.add_expires_at(expires_at);
  builder_.add_error_message(error_message);
  builder_.add_auth_token(auth_token);
  builder_.add_success(success);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<AuthResponse> CreateAuthResponseDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    const char *auth_token = nullptr,
    uint64_t expires_at = 0,
    const char *error_message = nullptr) {
  auto auth_token__ = auth_token ? _fbb.CreateString(auth_token) : 0;
  auto error_message__ = error_message ? _fbb.CreateString(error_message) : 0;
  return Teleop::CreateAuthResponse(
      _fbb,
      success,
      auth_token__,
      expires_at,
      error_message__);
}

inline const Teleop::AuthResponse *GetAuthResponse(const void *buf) {
  return ::flatbuffers::GetRoot<Teleop::AuthResponse>(buf);
}

inline const Teleop::AuthResponse *GetSizePrefixedAuthResponse(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<Teleop::AuthResponse>(buf);
}

inline bool VerifyAuthResponseBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Teleop::AuthResponse>(nullptr);
}

inline bool VerifySizePrefixedAuthResponseBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Teleop::AuthResponse>(nullptr);
}

inline void FinishAuthResponseBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<Teleop::AuthResponse> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedAuthResponseBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<Teleop::AuthResponse> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Teleop

#endif  // FLATBUFFERS_GENERATED_TELEOP_TELEOP_H_
