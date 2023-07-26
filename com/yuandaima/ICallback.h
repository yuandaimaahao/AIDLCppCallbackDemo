#ifndef AIDL_GENERATED_COM_YUANDAIMA_I_CALLBACK_H_
#define AIDL_GENERATED_COM_YUANDAIMA_I_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace com {

namespace yuandaima {

class ICallback : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(Callback)
  virtual ::android::binder::Status onCallback(const ::android::String16& str) = 0;
};  // class ICallback

class ICallbackDefault : public ICallback {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status onCallback(const ::android::String16& str) override;

};

}  // namespace yuandaima

}  // namespace com

#endif  // AIDL_GENERATED_COM_YUANDAIMA_I_CALLBACK_H_
