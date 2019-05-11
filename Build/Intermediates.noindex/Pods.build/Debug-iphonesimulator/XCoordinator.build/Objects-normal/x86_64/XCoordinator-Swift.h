// Generated by Apple Swift version 5.0.1 effective-4.2 (swiftlang-1001.0.82.4 clang-1001.0.46.5)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="XCoordinator",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// <code>Animation</code> is used to set presentation and dismissal animations for presentables.
/// Depending on the transition in use, different properties of a <code>UIViewController</code> are set to make sure the transition animation is used.
/// note:
///
/// To not override the previously set <code>Animation</code>, use <code>nil</code> when initializing a transition.
/// Make sure to hold a strong reference to the <code>Animation</code> object, as it is only held by a weak reference.
SWIFT_CLASS("_TtC12XCoordinator9Animation")
@interface Animation : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class UIViewController;
@protocol UIViewControllerAnimatedTransitioning;
@protocol UIViewControllerInteractiveTransitioning;

@interface Animation (SWIFT_EXTENSION(XCoordinator)) <UIViewControllerTransitioningDelegate>
/// See <a href="https://developer.apple.com/documentation/uikit/UIViewControllerTransitioningDelegate">UIViewControllerTransitioningDelegate</a>
/// for further reference.
/// \param presented The view controller to be presented.
///
/// \param presenting The view controller that is presenting.
///
/// \param source The view controller whose <code>present(_:animated:completion:)</code> was called.
///
///
/// returns:
///
/// The presentation animation when initializing the <code>Animation</code> object.
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/UIViewControllerTransitioningDelegate">UIViewControllerTransitioningDelegate</a>
/// for further reference.
/// \param dismissed 
/// The view controller to be dismissed.
///
///
/// returns:
///
/// The dismissal animation when initializing the <code>Animation</code> object.
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/UIViewControllerTransitioningDelegate">UIViewControllerTransitioningDelegate</a>
/// for further reference.
/// \param animator 
/// The animator of this transition, which is most likely the presentation animation.
///
///
/// returns:
///
/// The presentation animation’s interaction controller.
- (id <UIViewControllerInteractiveTransitioning> _Nullable)interactionControllerForPresentation:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animator SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/UIViewControllerTransitioningDelegate">UIViewControllerTransitioningDelegate</a>
/// for further reference.
/// \param animator 
/// The animator of this transition, which is most likely the dismissal animation.
///
///
/// returns:
///
/// The dismissal animation’s interaction controller.
- (id <UIViewControllerInteractiveTransitioning> _Nullable)interactionControllerForDismissal:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animator SWIFT_WARN_UNUSED_RESULT;
@end

@protocol UIViewControllerContextTransitioning;

/// <code>InteractiveTransitionAnimation</code> provides a simple interface to create interactive transition animations.
/// An <code>InteractiveTransitionAnimation</code> can be created by providing the duration, the animation code
/// and (optionally) a closure to create an interaction controller.
/// note:
///
/// To get further information read the UIKit documentation of
/// <a href="https://developer.apple.com/documentation/uikit/UIViewControllerAnimatedTransitioning">UIViewControllerAnimatedTransitioning</a>,
/// <a href="https://developer.apple.com/documentation/uikit/UIViewControllerInteractiveTransitioning">UIViewControllerInteractiveTransitioning</a>,
/// <a href="https://developer.apple.com/documentation/uikit/UIViewControllerContextTransitioning">UIViewControllerContextTransitioning</a> and
/// <a href="https://developer.apple.com/documentation/uikit/UIPercentDrivenInteractiveTransition">UIPercentDrivenInteractiveTransition</a>.
SWIFT_CLASS("_TtC12XCoordinator30InteractiveTransitionAnimation")
@interface InteractiveTransitionAnimation : NSObject <UIViewControllerAnimatedTransitioning>
/// See <a href="https://developer.apple.com/documentation/uikit/UIViewControllerAnimatedTransitioning">UIViewControllerAnimatedTransitioning</a>
/// for further information.
/// \param transitionContext 
/// The context of the transition.
///
///
/// returns:
///
/// The transition duration as specified in the initializer.
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/UIViewControllerAnimatedTransitioning">UIViewControllerAnimatedTransitioning</a>
/// for further information.
/// \param transitionContext 
/// The context of a transition for which the animation should be started.
///
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@protocol UIViewImplicitlyAnimating;

/// Use InterruptibleTransitionAnimation to define interactive transitions based on the
/// <a href="https://developer.apple.com/documentation/uikit/UIViewPropertyAnimator">UIViewPropertyAnimator</a>
/// APIs introduced in iOS 10.
SWIFT_CLASS("_TtC12XCoordinator32InterruptibleTransitionAnimation") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface InterruptibleTransitionAnimation : InteractiveTransitionAnimation
/// See <a href="https://developer.apple.com/documentation/uikit/UIViewControllerAnimatedTransitioning">UIViewControllerAnimatedTransitioning</a>
/// for further information.
/// This method simply calls <code>startAnimation()</code> on the interruptible animator.
/// \param transitionContext 
/// The context in which the transition is performed.
///
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
/// See <a href="https://developer.apple.com/documentation/uikit/UIViewControllerAnimatedTransitioning">UIViewControllerAnimatedTransitioning</a>
/// for further information.
/// This method returns an already generated interruptible animator, if present.
/// Otherwise it generates a new one using <code>generateInterruptibleAnimator(using:)</code>.
/// \param transitionContext 
/// The context in which the transition is performed.
///
- (id <UIViewImplicitlyAnimating> _Nonnull)interruptibleAnimatorForTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext SWIFT_WARN_UNUSED_RESULT;
@end


/// NavigationAnimationDelegate is used as the delegate of a NavigationCoordinator’s rootViewController
/// to allow for push-transitions to specify animations.
/// NavigationAnimationDelegate conforms to the <code>UINavigationControllerDelegate</code> protocol
/// and is intended for use as the delegate of one navigation controller only.
/// note:
///
/// Do not override the delegate of a NavigationCoordinator’s rootViewController.
/// Instead use the delegate property of the NavigationCoordinator itself.
SWIFT_CLASS("_TtC12XCoordinator27NavigationAnimationDelegate")
@interface NavigationAnimationDelegate : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIGestureRecognizer;

@interface NavigationAnimationDelegate (SWIFT_EXTENSION(XCoordinator)) <UIGestureRecognizerDelegate>
/// See <a href="https://developer.apple.com/documentation/uikit/UIGestureRecognizerDelegate">UIGestureRecognizerDelegate documentation</a>
/// for further reference.
/// note:
///
/// This method alters the target of the gestureRecognizer to either its former delegate (UIKit default)
/// or this class depending on whether a pop animation has been specified.
/// \param gestureRecognizer 
/// The gesture recognizer this class is the delegate of.
/// This class is used as the delegate for the interactivePopGestureRecognizer of
/// the navigationController.
///
///
/// returns:
///
/// This method returns true, if and only if
/// <ul>
///   <li>
///     there are more than 1 view controllers on the navigation controller stack (so that it is possible to pop a viewController) and
///   </li>
///   <li>
///     it is the interactivePopGestureRecognizer to call this method
///   </li>
/// </ul>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
/// This method handles changes of the navigation controller’s <code>interactivePopGestureRecognizer</code>.
/// This method performs the top-most dismissalAnimation and informs its interaction controller about changes
/// of the interactivePopGestureRecognizer’s state.
/// \param gestureRecognizer The interactivePopGestureRecognizer of the <code>UINavigationController</code>.
///
- (void)handleInteractivePopGestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer;
@end

@class UINavigationController;

@interface NavigationAnimationDelegate (SWIFT_EXTENSION(XCoordinator)) <UINavigationControllerDelegate>
/// See <a href="https://developer.apple.com/documentation/uikit/uinavigationcontrollerdelegate">UINavigationControllerDelegate documentation</a>
/// for further reference.
/// \param navigationController The delegate owner.
///
/// \param animationController The animationController to return the interactionController for.
///
///
/// returns:
///
/// If the animationController is a <code>TransitionAnimation</code>, it returns its interactionController.
/// Otherwise it requests an interactionController from the NavigationCoordinator’s delegate.
- (id <UIViewControllerInteractiveTransitioning> _Nullable)navigationController:(UINavigationController * _Nonnull)navigationController interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animationController SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/uinavigationcontrollerdelegate">UINavigationControllerDelegate documentation</a>
/// for further reference.
/// \param navigationController The delegate owner.
///
/// \param operation The operation being executed. Possible values are push, pop or none.
///
/// \param fromVC The source view controller of the transition.
///
/// \param toVC The destination view controller of the transition.
///
///
/// returns:
///
/// The destination view controller’s animationController depending on its <code>transitioningDelegate</code>.
/// In the case of a <code>push</code> operation, it returns the toVC’s presentation animation.
/// For <code>pop</code> it is the fromVC’s dismissal animation. If there is no transitioningDelegate or the operation <code>none</code> is used,
/// it uses the NavigationCoordinator’s delegate as fallback.
- (id <UIViewControllerAnimatedTransitioning> _Nullable)navigationController:(UINavigationController * _Nonnull)navigationController animationControllerForOperation:(enum UINavigationControllerOperation)operation fromViewController:(UIViewController * _Nonnull)fromVC toViewController:(UIViewController * _Nonnull)toVC SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/uinavigationcontrollerdelegate">UINavigationControllerDelegate documentation</a>
/// for further reference.
/// \param navigationController The delegate owner.
///
/// \param operation The operation being executed. Possible values are push, pop or none.
///
/// \param viewController The target view controller.
///
- (void)navigationController:(UINavigationController * _Nonnull)navigationController didShowViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
/// See <a href="https://developer.apple.com/documentation/uikit/uinavigationcontrollerdelegate">UINavigationControllerDelegate documentation</a>
/// for further reference.
/// \param navigationController The delegate owner.
///
/// \param operation The operation being executed. Possible values are push, pop or none.
///
/// \param viewController The view controller to be shown.
///
- (void)navigationController:(UINavigationController * _Nonnull)navigationController willShowViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
@end

@class UIPageViewController;

/// PageCoordinatorDataSource is a
/// <a href="https://developer.apple.com/documentation/uikit/UIPageViewControllerDataSource">UIPageViewControllerDataSource</a>
/// implementation with a rather static list of pages.
/// It further allows looping through the given pages. When looping is active the pages are wrapped around in the given presentables array.
/// When the user navigates beyond the end of the specified pages, the pages are wrapped around by displaying the first page.
/// In analogy to that, it also wraps to the last page when navigating beyond the beginning.
SWIFT_CLASS("_TtC12XCoordinator25PageCoordinatorDataSource")
@interface PageCoordinatorDataSource : NSObject <UIPageViewControllerDataSource>
/// See <a href="https://developer.apple.com/documentation/uikit/UIPageViewControllerDataSource">UIPageViewControllerDataSource</a>
/// for further information.
/// \param pageViewController 
/// The dataSource owner.
///
///
/// returns:
///
/// The count of <code>pages</code>, if it is displayed. Otherwise 0.
- (NSInteger)presentationCountForPageViewController:(UIPageViewController * _Nonnull)pageViewController SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/UIPageViewControllerDataSource">UIPageViewControllerDataSource</a>
/// for further information.
/// \param pageViewController 
/// The dataSource owner.
///
///
/// returns:
///
/// The index of the currently visible view controller.
- (NSInteger)presentationIndexForPageViewController:(UIPageViewController * _Nonnull)pageViewController SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/UIPageViewControllerDataSource">UIPageViewControllerDataSource</a>
/// for further information.
/// This method first searches for the index of the given viewController in the <code>pages</code> array.
/// It then tries to find a viewController at the preceding position by potentially looping.
/// \param pageViewController The dataSource owner.
///
/// \param viewController The viewController to find the preceding viewController of.
///
///
/// returns:
///
/// The preceding viewController.
- (UIViewController * _Nullable)pageViewController:(UIPageViewController * _Nonnull)pageViewController viewControllerBeforeViewController:(UIViewController * _Nonnull)viewController SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/UIPageViewControllerDataSource">UIPageViewControllerDataSource</a>
/// for further information.
/// This method first searches for the index of the given viewController in the <code>pages</code> array.
/// It then tries to find a viewController at the following position by potentially looping.
/// \param pageViewController The dataSource owner.
///
/// \param viewController The viewController to find the following viewController of.
///
///
/// returns:
///
/// The following viewController.
- (UIViewController * _Nullable)pageViewController:(UIPageViewController * _Nonnull)pageViewController viewControllerAfterViewController:(UIViewController * _Nonnull)viewController SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// <code>StaticTransitionAnimation</code> can be used to realize static transition animations.
/// note:
///
/// Consider using <code>InteractiveTransitionAnimation</code> instead, if possible, as it is as simple
/// to use. However, this class is helpful to make sure your transition animation is not mistaken to be
/// interactive, if your animation code does not fulfill the requirements of an interactive transition
/// animation.
SWIFT_CLASS("_TtC12XCoordinator25StaticTransitionAnimation")
@interface StaticTransitionAnimation : NSObject <UIViewControllerAnimatedTransitioning>
/// See <a href="https://developer.apple.com/documentation/uikit/UIViewControllerAnimatedTransitioning">UIViewControllerAnimatedTransitioning</a>
/// for further information.
/// \param transitionContext 
/// The context of the current transition.
///
///
/// returns:
///
/// The duration of the animation as specified in the initializer.
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/UIViewControllerAnimatedTransitioning">UIViewControllerAnimatedTransitioning</a>
/// for further information.
/// This method performs the animation as specified in the initializer.
/// \param transitionContext 
/// The context of the current transition.
///
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end




/// TabBarAnimationDelegate is used as the delegate of a TabBarCoordinator’s rootViewController
/// to allow for transitions to specify transition animations.
/// TabBarAnimationDelegate conforms to the <code>UITabBarControllerDelegate</code> protocol
/// and is intended for use as the delegate of one tabbar controller only.
/// note:
///
/// Do not override the delegate of a TabBarCoordinator’s rootViewController-delegate.
/// Instead use the delegate property of the TabBarCoordinator itself.
SWIFT_CLASS("_TtC12XCoordinator23TabBarAnimationDelegate")
@interface TabBarAnimationDelegate : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UITabBarController;

@interface TabBarAnimationDelegate (SWIFT_EXTENSION(XCoordinator)) <UITabBarControllerDelegate>
/// See <a href="https://developer.apple.com/documentation/uikit/UITabBarControllerDelegate">UITabBarControllerDelegate</a>
/// for further reference.
/// <ul>
///   <li>
///     Parameters
///     <ul>
///       <li>
///         tabBarController: The delegate owner.
///       </li>
///       <li>
///         animationController: The animationController to return the interactionController for.
///       </li>
///     </ul>
///   </li>
/// </ul>
///
/// returns:
///
/// If the animationController is a <code>TransitionAnimation</code>, it returns its interactionController.
/// Otherwise it requests an interactionController from the TabBarCoordinator’s delegate.
- (id <UIViewControllerInteractiveTransitioning> _Nullable)tabBarController:(UITabBarController * _Nonnull)tabBarController interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animationController SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/UITabBarControllerDelegate">UITabBarControllerDelegate</a>
/// for further reference.
/// \param tabBarController The delegate owner.
///
/// \param fromVC The source view controller of the transition.
///
/// \param toVC The destination view controller of the transition.
///
///
/// returns:
///
/// The presentation animation of the last specified <code>Animation</code> object of a <code>set</code> or <code>select</code> transition.
/// If not present, it uses the TabBarCoordinator’s delegate as fallback.
- (id <UIViewControllerAnimatedTransitioning> _Nullable)tabBarController:(UITabBarController * _Nonnull)tabBarController animationControllerForTransitionFromViewController:(UIViewController * _Nonnull)fromVC toViewController:(UIViewController * _Nonnull)toVC SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/UITabBarControllerDelegate">UITabBarControllerDelegate</a>
/// for further reference.
/// This method delegates to the TabBarCoordinator’s delegate.
/// \param tabBarController The delegate owner.
///
/// \param viewController The destination viewController.
///
- (void)tabBarController:(UITabBarController * _Nonnull)tabBarController didSelectViewController:(UIViewController * _Nonnull)viewController;
/// See <a href="https://developer.apple.com/documentation/uikit/UITabBarControllerDelegate">UITabBarControllerDelegate</a>
/// for further reference.
/// This method delegates to the TabBarCoordinator’s delegate.
/// \param tabBarController The delegate owner.
///
/// \param viewController The destination viewController.
///
///
/// returns:
///
/// The result of the TabBarCooordinator’s delegate. If not specified, it returns true.
- (BOOL)tabBarController:(UITabBarController * _Nonnull)tabBarController shouldSelectViewController:(UIViewController * _Nonnull)viewController SWIFT_WARN_UNUSED_RESULT;
/// See <a href="https://developer.apple.com/documentation/uikit/UITabBarControllerDelegate">UITabBarControllerDelegate</a>
/// for further reference.
/// This method delegates to the TabBarCoordinator’s delegate.
/// \param tabBarController The delegate owner.
///
/// \param viewControllers The source viewControllers.
///
- (void)tabBarController:(UITabBarController * _Nonnull)tabBarController willBeginCustomizingViewControllers:(NSArray<UIViewController *> * _Nonnull)viewControllers;
/// See <a href="https://developer.apple.com/documentation/uikit/UITabBarControllerDelegate">UITabBarControllerDelegate</a>
/// for further reference.
/// This method delegates to the TabBarCoordinator’s delegate.
/// \param tabBarController The delegate owner.
///
/// \param viewControllers The source viewControllers.
///
- (void)tabBarController:(UITabBarController * _Nonnull)tabBarController didEndCustomizingViewControllers:(NSArray<UIViewController *> * _Nonnull)viewControllers changed:(BOOL)changed;
/// See <a href="https://developer.apple.com/documentation/uikit/UITabBarControllerDelegate">UITabBarControllerDelegate</a>
/// for further reference.
/// This method delegates to the TabBarCoordinator’s delegate.
/// \param tabBarController The delegate owner.
///
/// \param viewControllers The source viewControllers.
///
- (void)tabBarController:(UITabBarController * _Nonnull)tabBarController willEndCustomizingViewControllers:(NSArray<UIViewController *> * _Nonnull)viewControllers changed:(BOOL)changed;
@end































#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
