﻿#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Xml.dll>
#using <System.Web.Services.dll>
#using <System.EnterpriseServices.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// This source code was auto-generated by wsdl, Version=2.0.50727.42.
// 
namespace MicroturbineSvc {
    using namespace System::Xml::Serialization;
    using namespace System::Web::Services;
    using namespace System::ComponentModel;
    using namespace System::Web::Services::Protocols;
    using namespace System;
    using namespace System::Diagnostics;
    
    using namespace System;
    ref class MicroturbineClass;
    ref class microturbine_initCompletedEventArgs;
    ref class microturbine_presyncCompletedEventArgs;
    ref class microturbine_syncCompletedEventArgs;
    
    
    /// <remarks/>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.42")]
    public delegate System::Void microturbine_initCompletedEventHandler(System::Object^  sender, MicroturbineSvc::microturbine_initCompletedEventArgs^  e);
    
    /// <remarks/>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.42")]
    public delegate System::Void microturbine_presyncCompletedEventHandler(System::Object^  sender, MicroturbineSvc::microturbine_presyncCompletedEventArgs^  e);
    
    /// <remarks/>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.42")]
    public delegate System::Void microturbine_syncCompletedEventHandler(System::Object^  sender, MicroturbineSvc::microturbine_syncCompletedEventArgs^  e);
    
    /// <remarks/>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.42"), 
    System::Diagnostics::DebuggerStepThroughAttribute, 
    System::ComponentModel::DesignerCategoryAttribute(L"code"), 
    System::Web::Services::WebServiceBindingAttribute(Name=L"MicroturbineClassSoap", Namespace=L"www.inf.uth.gr/webservices/somagion_revythas/MicroTurbine")]
    public ref class MicroturbineClass : public System::Web::Services::Protocols::SoapHttpClientProtocol {
        
        private: System::Threading::SendOrPostCallback^  microturbine_initOperationCompleted;
        
        private: System::Threading::SendOrPostCallback^  microturbine_presyncOperationCompleted;
        
        private: System::Threading::SendOrPostCallback^  microturbine_syncOperationCompleted;
        
        /// <remarks/>
        public: event MicroturbineSvc::microturbine_initCompletedEventHandler^  microturbine_initCompleted;
        
        /// <remarks/>
        public: event MicroturbineSvc::microturbine_presyncCompletedEventHandler^  microturbine_presyncCompleted;
        
        /// <remarks/>
        public: event MicroturbineSvc::microturbine_syncCompletedEventHandler^  microturbine_syncCompleted;
        
        /// <remarks/>
        public: MicroturbineClass();
        /// <remarks/>
        public: [System::Web::Services::Protocols::SoapDocumentMethodAttribute(L"www.inf.uth.gr/webservices/somagion_revythas/MicroTurbine/microturbine_init", 
            RequestNamespace=L"www.inf.uth.gr/webservices/somagion_revythas/MicroTurbine", ResponseNamespace=L"www.inf.uth.gr/webservices/somagion_revythas/MicroTurbine", 
            Use=System::Web::Services::Description::SoapBindingUse::Literal, ParameterStyle=System::Web::Services::Protocols::SoapParameterStyle::Wrapped)]
        System::Double microturbine_init();
        
        /// <remarks/>
        public: System::IAsyncResult^  Beginmicroturbine_init(System::AsyncCallback^  callback, System::Object^  asyncState);
        
        /// <remarks/>
        public: System::Double Endmicroturbine_init(System::IAsyncResult^  asyncResult);
        
        /// <remarks/>
        public: System::Void microturbine_initAsync();
        
        /// <remarks/>
        public: System::Void microturbine_initAsync(System::Object^  userState);
        
        private: System::Void Onmicroturbine_initOperationCompleted(System::Object^  arg);
        
        /// <remarks/>
        public: [System::Web::Services::Protocols::SoapDocumentMethodAttribute(L"www.inf.uth.gr/webservices/somagion_revythas/MicroTurbine/microturbine_presync", 
            RequestNamespace=L"www.inf.uth.gr/webservices/somagion_revythas/MicroTurbine", ResponseNamespace=L"www.inf.uth.gr/webservices/somagion_revythas/MicroTurbine", 
            Use=System::Web::Services::Description::SoapBindingUse::Literal, ParameterStyle=System::Web::Services::Protocols::SoapParameterStyle::Wrapped)]
        System::Int32 microturbine_presync(System::Int32 t0, System::Int32 t1);
        
        /// <remarks/>
        public: System::IAsyncResult^  Beginmicroturbine_presync(System::Int32 t0, System::Int32 t1, System::AsyncCallback^  callback, 
                    System::Object^  asyncState);
        
        /// <remarks/>
        public: System::Int32 Endmicroturbine_presync(System::IAsyncResult^  asyncResult);
        
        /// <remarks/>
        public: System::Void microturbine_presyncAsync(System::Int32 t0, System::Int32 t1);
        
        /// <remarks/>
        public: System::Void microturbine_presyncAsync(System::Int32 t0, System::Int32 t1, System::Object^  userState);
        
        private: System::Void Onmicroturbine_presyncOperationCompleted(System::Object^  arg);
        
        /// <remarks/>
        public: [System::Web::Services::Protocols::SoapDocumentMethodAttribute(L"www.inf.uth.gr/webservices/somagion_revythas/MicroTurbine/microturbine_sync", 
            RequestNamespace=L"www.inf.uth.gr/webservices/somagion_revythas/MicroTurbine", ResponseNamespace=L"www.inf.uth.gr/webservices/somagion_revythas/MicroTurbine", 
            Use=System::Web::Services::Description::SoapBindingUse::Literal, ParameterStyle=System::Web::Services::Protocols::SoapParameterStyle::Wrapped)]
        System::Double microturbine_sync(
                    System::Double CircuitA_V_Out_real, 
                    System::Double CircuitA_V_Out_imag, 
                    System::Double CircuitB_V_Out_real, 
                    System::Double CircuitB_V_Out_imag, 
                    System::Double CircuitC_V_Out_real, 
                    System::Double CircuitC_V_Out_imag, 
                    System::Double LineA_V_Out_real, 
                    System::Double LineA_V_Out_imag, 
                    System::Double LineB_V_Out_real, 
                    System::Double LineB_V_Out_imag, 
                    System::Double LineC_V_Out_real, 
                    System::Double LineC_V_Out_imag);
        
        /// <remarks/>
        public: System::IAsyncResult^  Beginmicroturbine_sync(
                    System::Double CircuitA_V_Out_real, 
                    System::Double CircuitA_V_Out_imag, 
                    System::Double CircuitB_V_Out_real, 
                    System::Double CircuitB_V_Out_imag, 
                    System::Double CircuitC_V_Out_real, 
                    System::Double CircuitC_V_Out_imag, 
                    System::Double LineA_V_Out_real, 
                    System::Double LineA_V_Out_imag, 
                    System::Double LineB_V_Out_real, 
                    System::Double LineB_V_Out_imag, 
                    System::Double LineC_V_Out_real, 
                    System::Double LineC_V_Out_imag, 
                    System::AsyncCallback^  callback, 
                    System::Object^  asyncState);
        
        /// <remarks/>
        public: System::Double Endmicroturbine_sync(System::IAsyncResult^  asyncResult);
        
        /// <remarks/>
        public: System::Void microturbine_syncAsync(
                    System::Double CircuitA_V_Out_real, 
                    System::Double CircuitA_V_Out_imag, 
                    System::Double CircuitB_V_Out_real, 
                    System::Double CircuitB_V_Out_imag, 
                    System::Double CircuitC_V_Out_real, 
                    System::Double CircuitC_V_Out_imag, 
                    System::Double LineA_V_Out_real, 
                    System::Double LineA_V_Out_imag, 
                    System::Double LineB_V_Out_real, 
                    System::Double LineB_V_Out_imag, 
                    System::Double LineC_V_Out_real, 
                    System::Double LineC_V_Out_imag);
        
        /// <remarks/>
        public: System::Void microturbine_syncAsync(
                    System::Double CircuitA_V_Out_real, 
                    System::Double CircuitA_V_Out_imag, 
                    System::Double CircuitB_V_Out_real, 
                    System::Double CircuitB_V_Out_imag, 
                    System::Double CircuitC_V_Out_real, 
                    System::Double CircuitC_V_Out_imag, 
                    System::Double LineA_V_Out_real, 
                    System::Double LineA_V_Out_imag, 
                    System::Double LineB_V_Out_real, 
                    System::Double LineB_V_Out_imag, 
                    System::Double LineC_V_Out_real, 
                    System::Double LineC_V_Out_imag, 
                    System::Object^  userState);
        
        private: System::Void Onmicroturbine_syncOperationCompleted(System::Object^  arg);
        
        /// <remarks/>
        public: System::Void CancelAsync(System::Object^  userState) new;
    };
    
    /// <remarks/>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.42"), 
    System::Diagnostics::DebuggerStepThroughAttribute, 
    System::ComponentModel::DesignerCategoryAttribute(L"code")]
    public ref class microturbine_initCompletedEventArgs : public System::ComponentModel::AsyncCompletedEventArgs {
        
        private: cli::array< System::Object^  >^  results;
        
        internal: microturbine_initCompletedEventArgs(cli::array< System::Object^  >^  results, System::Exception^  exception, 
                    System::Boolean cancelled, System::Object^  userState);
        /// <remarks/>
        public: property System::Double Result {
            System::Double get();
        }
    };
    
    /// <remarks/>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.42"), 
    System::Diagnostics::DebuggerStepThroughAttribute, 
    System::ComponentModel::DesignerCategoryAttribute(L"code")]
    public ref class microturbine_presyncCompletedEventArgs : public System::ComponentModel::AsyncCompletedEventArgs {
        
        private: cli::array< System::Object^  >^  results;
        
        internal: microturbine_presyncCompletedEventArgs(cli::array< System::Object^  >^  results, System::Exception^  exception, 
                    System::Boolean cancelled, System::Object^  userState);
        /// <remarks/>
        public: property System::Int32 Result {
            System::Int32 get();
        }
    };
    
    /// <remarks/>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.42"), 
    System::Diagnostics::DebuggerStepThroughAttribute, 
    System::ComponentModel::DesignerCategoryAttribute(L"code")]
    public ref class microturbine_syncCompletedEventArgs : public System::ComponentModel::AsyncCompletedEventArgs {
        
        private: cli::array< System::Object^  >^  results;
        
        internal: microturbine_syncCompletedEventArgs(cli::array< System::Object^  >^  results, System::Exception^  exception, 
                    System::Boolean cancelled, System::Object^  userState);
        /// <remarks/>
        public: property System::Double Result {
            System::Double get();
        }
    };
}
namespace MicroturbineSvc {
    
    
    inline MicroturbineClass::MicroturbineClass() {
        this->Url = L"http://10.96.12.51/MicroturbineSetup/Microturbine.asmx";
    }
    
    inline System::Double MicroturbineClass::microturbine_init() {
        cli::array< System::Object^  >^  results = this->Invoke(L"microturbine_init", gcnew cli::array< System::Object^  >(0));
        return (*cli::safe_cast<System::Double^>(results[0]));
    }
    
    inline System::IAsyncResult^  MicroturbineClass::Beginmicroturbine_init(System::AsyncCallback^  callback, System::Object^  asyncState) {
        return this->BeginInvoke(L"microturbine_init", gcnew cli::array< System::Object^  >(0), callback, asyncState);
    }
    
    inline System::Double MicroturbineClass::Endmicroturbine_init(System::IAsyncResult^  asyncResult) {
        cli::array< System::Object^  >^  results = this->EndInvoke(asyncResult);
        return (*cli::safe_cast<System::Double^>(results[0]));
    }
    
    inline System::Void MicroturbineClass::microturbine_initAsync() {
        this->microturbine_initAsync(nullptr);
    }
    
    inline System::Void MicroturbineClass::microturbine_initAsync(System::Object^  userState) {
        if (this->microturbine_initOperationCompleted == nullptr) {
            this->microturbine_initOperationCompleted = gcnew System::Threading::SendOrPostCallback(this, &MicroturbineSvc::MicroturbineClass::Onmicroturbine_initOperationCompleted);
        }
        this->InvokeAsync(L"microturbine_init", gcnew cli::array< System::Object^  >(0), this->microturbine_initOperationCompleted, 
            userState);
    }
    
    inline System::Void MicroturbineClass::Onmicroturbine_initOperationCompleted(System::Object^  arg) {
        {
            System::Web::Services::Protocols::InvokeCompletedEventArgs^  invokeArgs = (cli::safe_cast<System::Web::Services::Protocols::InvokeCompletedEventArgs^  >(arg));
            this->microturbine_initCompleted(this, (gcnew MicroturbineSvc::microturbine_initCompletedEventArgs(invokeArgs->Results, 
                    invokeArgs->Error, invokeArgs->Cancelled, invokeArgs->UserState)));
        }
    }
    
    inline System::Int32 MicroturbineClass::microturbine_presync(System::Int32 t0, System::Int32 t1) {
        cli::array< System::Object^  >^  results = this->Invoke(L"microturbine_presync", gcnew cli::array< System::Object^  >(2) {t0, 
                t1});
        return (*cli::safe_cast<System::Int32^>(results[0]));
    }
    
    inline System::IAsyncResult^  MicroturbineClass::Beginmicroturbine_presync(System::Int32 t0, System::Int32 t1, System::AsyncCallback^  callback, 
                System::Object^  asyncState) {
        return this->BeginInvoke(L"microturbine_presync", gcnew cli::array< System::Object^  >(2) {t0, t1}, callback, asyncState);
    }
    
    inline System::Int32 MicroturbineClass::Endmicroturbine_presync(System::IAsyncResult^  asyncResult) {
        cli::array< System::Object^  >^  results = this->EndInvoke(asyncResult);
        return (*cli::safe_cast<System::Int32^>(results[0]));
    }
    
    inline System::Void MicroturbineClass::microturbine_presyncAsync(System::Int32 t0, System::Int32 t1) {
        this->microturbine_presyncAsync(t0, t1, nullptr);
    }
    
    inline System::Void MicroturbineClass::microturbine_presyncAsync(System::Int32 t0, System::Int32 t1, System::Object^  userState) {
        if (this->microturbine_presyncOperationCompleted == nullptr) {
            this->microturbine_presyncOperationCompleted = gcnew System::Threading::SendOrPostCallback(this, &MicroturbineSvc::MicroturbineClass::Onmicroturbine_presyncOperationCompleted);
        }
        this->InvokeAsync(L"microturbine_presync", gcnew cli::array< System::Object^  >(2) {t0, t1}, this->microturbine_presyncOperationCompleted, 
            userState);
    }
    
    inline System::Void MicroturbineClass::Onmicroturbine_presyncOperationCompleted(System::Object^  arg) {
        {
            System::Web::Services::Protocols::InvokeCompletedEventArgs^  invokeArgs = (cli::safe_cast<System::Web::Services::Protocols::InvokeCompletedEventArgs^  >(arg));
            this->microturbine_presyncCompleted(this, (gcnew MicroturbineSvc::microturbine_presyncCompletedEventArgs(invokeArgs->Results, 
                    invokeArgs->Error, invokeArgs->Cancelled, invokeArgs->UserState)));
        }
    }
    
    inline System::Double MicroturbineClass::microturbine_sync(
                System::Double CircuitA_V_Out_real, 
                System::Double CircuitA_V_Out_imag, 
                System::Double CircuitB_V_Out_real, 
                System::Double CircuitB_V_Out_imag, 
                System::Double CircuitC_V_Out_real, 
                System::Double CircuitC_V_Out_imag, 
                System::Double LineA_V_Out_real, 
                System::Double LineA_V_Out_imag, 
                System::Double LineB_V_Out_real, 
                System::Double LineB_V_Out_imag, 
                System::Double LineC_V_Out_real, 
                System::Double LineC_V_Out_imag) {
        cli::array< System::Object^  >^  results = this->Invoke(L"microturbine_sync", gcnew cli::array< System::Object^  >(12) {CircuitA_V_Out_real, 
                CircuitA_V_Out_imag, CircuitB_V_Out_real, CircuitB_V_Out_imag, CircuitC_V_Out_real, CircuitC_V_Out_imag, LineA_V_Out_real, 
                LineA_V_Out_imag, LineB_V_Out_real, LineB_V_Out_imag, LineC_V_Out_real, LineC_V_Out_imag});
        return (*cli::safe_cast<System::Double^>(results[0]));
    }
    
    inline System::IAsyncResult^  MicroturbineClass::Beginmicroturbine_sync(
                System::Double CircuitA_V_Out_real, 
                System::Double CircuitA_V_Out_imag, 
                System::Double CircuitB_V_Out_real, 
                System::Double CircuitB_V_Out_imag, 
                System::Double CircuitC_V_Out_real, 
                System::Double CircuitC_V_Out_imag, 
                System::Double LineA_V_Out_real, 
                System::Double LineA_V_Out_imag, 
                System::Double LineB_V_Out_real, 
                System::Double LineB_V_Out_imag, 
                System::Double LineC_V_Out_real, 
                System::Double LineC_V_Out_imag, 
                System::AsyncCallback^  callback, 
                System::Object^  asyncState) {
        return this->BeginInvoke(L"microturbine_sync", gcnew cli::array< System::Object^  >(12) {CircuitA_V_Out_real, CircuitA_V_Out_imag, 
                CircuitB_V_Out_real, CircuitB_V_Out_imag, CircuitC_V_Out_real, CircuitC_V_Out_imag, LineA_V_Out_real, LineA_V_Out_imag, 
                LineB_V_Out_real, LineB_V_Out_imag, LineC_V_Out_real, LineC_V_Out_imag}, callback, asyncState);
    }
    
    inline System::Double MicroturbineClass::Endmicroturbine_sync(System::IAsyncResult^  asyncResult) {
        cli::array< System::Object^  >^  results = this->EndInvoke(asyncResult);
        return (*cli::safe_cast<System::Double^>(results[0]));
    }
    
    inline System::Void MicroturbineClass::microturbine_syncAsync(
                System::Double CircuitA_V_Out_real, 
                System::Double CircuitA_V_Out_imag, 
                System::Double CircuitB_V_Out_real, 
                System::Double CircuitB_V_Out_imag, 
                System::Double CircuitC_V_Out_real, 
                System::Double CircuitC_V_Out_imag, 
                System::Double LineA_V_Out_real, 
                System::Double LineA_V_Out_imag, 
                System::Double LineB_V_Out_real, 
                System::Double LineB_V_Out_imag, 
                System::Double LineC_V_Out_real, 
                System::Double LineC_V_Out_imag) {
        this->microturbine_syncAsync(CircuitA_V_Out_real, CircuitA_V_Out_imag, CircuitB_V_Out_real, CircuitB_V_Out_imag, CircuitC_V_Out_real, 
            CircuitC_V_Out_imag, LineA_V_Out_real, LineA_V_Out_imag, LineB_V_Out_real, LineB_V_Out_imag, LineC_V_Out_real, LineC_V_Out_imag, 
            nullptr);
    }
    
    inline System::Void MicroturbineClass::microturbine_syncAsync(
                System::Double CircuitA_V_Out_real, 
                System::Double CircuitA_V_Out_imag, 
                System::Double CircuitB_V_Out_real, 
                System::Double CircuitB_V_Out_imag, 
                System::Double CircuitC_V_Out_real, 
                System::Double CircuitC_V_Out_imag, 
                System::Double LineA_V_Out_real, 
                System::Double LineA_V_Out_imag, 
                System::Double LineB_V_Out_real, 
                System::Double LineB_V_Out_imag, 
                System::Double LineC_V_Out_real, 
                System::Double LineC_V_Out_imag, 
                System::Object^  userState) {
        if (this->microturbine_syncOperationCompleted == nullptr) {
            this->microturbine_syncOperationCompleted = gcnew System::Threading::SendOrPostCallback(this, &MicroturbineSvc::MicroturbineClass::Onmicroturbine_syncOperationCompleted);
        }
        this->InvokeAsync(L"microturbine_sync", gcnew cli::array< System::Object^  >(12) {CircuitA_V_Out_real, CircuitA_V_Out_imag, 
                CircuitB_V_Out_real, CircuitB_V_Out_imag, CircuitC_V_Out_real, CircuitC_V_Out_imag, LineA_V_Out_real, LineA_V_Out_imag, 
                LineB_V_Out_real, LineB_V_Out_imag, LineC_V_Out_real, LineC_V_Out_imag}, this->microturbine_syncOperationCompleted, userState);
    }
    
    inline System::Void MicroturbineClass::Onmicroturbine_syncOperationCompleted(System::Object^  arg) {
        {
            System::Web::Services::Protocols::InvokeCompletedEventArgs^  invokeArgs = (cli::safe_cast<System::Web::Services::Protocols::InvokeCompletedEventArgs^  >(arg));
            this->microturbine_syncCompleted(this, (gcnew MicroturbineSvc::microturbine_syncCompletedEventArgs(invokeArgs->Results, 
                    invokeArgs->Error, invokeArgs->Cancelled, invokeArgs->UserState)));
        }
    }
    
    inline System::Void MicroturbineClass::CancelAsync(System::Object^  userState) {
        __super::CancelAsync(userState);
    }
    
    
    inline microturbine_initCompletedEventArgs::microturbine_initCompletedEventArgs(cli::array< System::Object^  >^  results, 
                System::Exception^  exception, System::Boolean cancelled, System::Object^  userState) : 
            System::ComponentModel::AsyncCompletedEventArgs(exception, cancelled, userState) {
        this->results = results;
    }
    
    inline System::Double microturbine_initCompletedEventArgs::Result::get() {
        this->RaiseExceptionIfNecessary();
        return (*cli::safe_cast<System::Double^>(this->results[0]));
    }
    
    
    inline microturbine_presyncCompletedEventArgs::microturbine_presyncCompletedEventArgs(cli::array< System::Object^  >^  results, 
                System::Exception^  exception, System::Boolean cancelled, System::Object^  userState) : 
            System::ComponentModel::AsyncCompletedEventArgs(exception, cancelled, userState) {
        this->results = results;
    }
    
    inline System::Int32 microturbine_presyncCompletedEventArgs::Result::get() {
        this->RaiseExceptionIfNecessary();
        return (*cli::safe_cast<System::Int32^>(this->results[0]));
    }
    
    
    inline microturbine_syncCompletedEventArgs::microturbine_syncCompletedEventArgs(cli::array< System::Object^  >^  results, 
                System::Exception^  exception, System::Boolean cancelled, System::Object^  userState) : 
            System::ComponentModel::AsyncCompletedEventArgs(exception, cancelled, userState) {
        this->results = results;
    }
    
    inline System::Double microturbine_syncCompletedEventArgs::Result::get() {
        this->RaiseExceptionIfNecessary();
        return (*cli::safe_cast<System::Double^>(this->results[0]));
    }
}
