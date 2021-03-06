/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNGreetingViewDelegate.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNNullStateViewControllerCellDelegate;
@class MNGreetingView, MNThreadViewModel, MNGreetingCellControllerInjector, NSArray, MNGreetingCollectionViewModel, NSString;

@interface MNGreetingCellController : NSObject <FBClassInjectable, MNGreetingViewDelegate, MNThreadViewModelConfigurable> {

	MNGreetingView* _greetingView;
	MNThreadViewModel* _threadViewModel;
	MNGreetingCellControllerInjector* _injector;
	NSArray* _greetingViewModels;
	id<MNNullStateViewControllerCellDelegate> _delegate;
	MNGreetingCollectionViewModel* _viewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) MNGreetingCollectionViewModel * viewModel;                                //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNNullStateViewControllerCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)threadViewModel;
-(void)awakeWithCollectionView:(id)arg1 ;
-(id)cellWithIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)greetingViewDidTapDismissButton:(id)arg1 ;
-(void)greetingView:(id)arg1 didSelectGreeting:(id)arg2 ;
-(BOOL)_shouldHideGreetingView;
-(id)_greetingViewWithFrame:(CGRect)arg1 ;
-(id)layoutElementsForSize:(CGSize)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(void)setDelegate:(id<MNNullStateViewControllerCellDelegate>)arg1 ;
-(id<MNNullStateViewControllerCellDelegate>)delegate;
-(MNGreetingCollectionViewModel *)viewModel;
-(void)setViewModel:(MNGreetingCollectionViewModel *)arg1 ;
@end

