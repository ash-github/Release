﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES

#include "GacUI.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace vl_workflow_global
{
	struct __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
	struct __vwsnf2_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
	struct __vwsnf3_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
	struct __vwsnf4_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
	class __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	class __vwsnc2_Demo_demo_MyControlConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
}

namespace demo
{
	class MainWindowConstructor;
	class MainWindow;
	class MyControlConstructor;
	class MyControl;

	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::demo::MyControl* myControl;
		::demo::MainWindow* __vwsn_precompile_0;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_1;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_2;
		void __vwsn_initialize_instance_(::demo::MainWindow* __vwsn_this_);
	public:
		MainWindowConstructor();
	};

	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::demo::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::demo::MainWindowConstructor;
		friend class ::vl_workflow_global::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	public:
		MainWindow();
		~MainWindow();
	};

	class MyControlConstructor : public ::vl::Object, public ::vl::reflection::Description<MyControlConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc2_Demo_demo_MyControlConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf3_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf4_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MyControlConstructor>;
#endif
	protected:
		::demo::MyControl* self;
		::vl::presentation::controls::GuiSelectableButton::MutexGroupController* optionGroup;
		::vl::presentation::controls::GuiControl* __vwsn_precompile_0;
		::vl::presentation::compositions::GuiStackComposition* __vwsn_precompile_1;
		::vl::presentation::compositions::GuiStackItemComposition* __vwsn_precompile_2;
		::vl::presentation::controls::GuiSelectableButton* __vwsn_precompile_3;
		::vl::presentation::compositions::GuiStackItemComposition* __vwsn_precompile_4;
		::vl::presentation::controls::GuiSelectableButton* __vwsn_precompile_5;
		::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_precompile_6;
		::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_precompile_7;
		void __vwsn_initialize_instance_(::demo::MyControl* __vwsn_this_);
	public:
		MyControlConstructor();
	};

	class MyControl : public ::vl::presentation::controls::GuiCustomControl, public ::demo::MyControlConstructor, public ::vl::reflection::Description<MyControl>
	{
		friend class ::demo::MyControlConstructor;
		friend class ::vl_workflow_global::__vwsnc2_Demo_demo_MyControlConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf3_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf4_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MyControl>;
#endif
	public:
		::vl::WString __vwsn_prop_SelectedOption;
		::vl::WString GetSelectedOption();
		void SetSelectedOption(const ::vl::WString& __vwsn_value_);
		::vl::Event<void()> SelectedOptionChanged;
		MyControl();
		~MyControl();
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class Demo
	{
	public:

		static Demo& Instance();
	};

/***********************************************************************
Closures
***********************************************************************/

	struct __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsnf2_Demo_demo_MyControlConstructor___vwsn_initialize_instance__
	{
		::demo::MyControlConstructor* __vwsnthis_0;

		__vwsnf2_Demo_demo_MyControlConstructor___vwsn_initialize_instance__(::demo::MyControlConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf3_Demo_demo_MyControlConstructor___vwsn_initialize_instance__
	{
		::demo::MyControlConstructor* __vwsnthis_0;

		__vwsnf3_Demo_demo_MyControlConstructor___vwsn_initialize_instance__(::demo::MyControlConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf4_Demo_demo_MyControlConstructor___vwsn_initialize_instance__
	{
		::demo::MyControlConstructor* __vwsnthis_0;

		__vwsnf4_Demo_demo_MyControlConstructor___vwsn_initialize_instance__(::demo::MyControlConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	class __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription(::demo::MainWindowConstructor* __vwsnctorthis_0);

		::demo::MyControl* __vwsn_bind_cache_0 = nullptr;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0();
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};

	class __vwsnc2_Demo_demo_MyControlConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::demo::MyControlConstructor* __vwsnthis_0;

		__vwsnc2_Demo_demo_MyControlConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription(::demo::MyControlConstructor* __vwsnctorthis_0);

		::demo::MyControl* __vwsn_bind_cache_0 = nullptr;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1);
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
