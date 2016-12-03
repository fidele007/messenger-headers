/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class CKComponentScopeHandle, UIView;

@interface CKComponent : NSObject {

	CKComponentScopeHandle* _scopeHandle;
	CKComponentViewConfiguration* _viewConfiguration;
	unique_ptr<CKComponentMountInfo, std::__1::default_delete<CKComponentMountInfo> >* _mountInfo;
	CKComponentSize _size;

}

@property (assign,nonatomic,__weak) UIView * rootComponentMountedView; 
@property (nonatomic,readonly) id<NSObject> scopeFrameToken; 
@property (nonatomic,readonly) CKComponentSize size;                                //@synthesize size=_size - In the implementation block
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 ;
+(id)new;
+(id)initialState;
-(CKComponentViewContext)viewContext;
-(void)updateState:(/*^block*/id)arg1 mode:(unsigned long long)arg2 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(CKComponentLayout*)layoutThatFits:(CKSizeRange)arg1 parentSize:(CGSize)arg2 ;
-(MountResult*)mountInContext:(const MountContext*)arg1 size:(CGSize)arg2 children:(shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > >*)arg3 supercomponent:(id)arg4 ;
-(void)unmount;
-(id)viewForAnimation;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsOnInitialMount;
-(void)childrenDidMount;
-(id<NSObject>)scopeFrameToken;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 restrictedToSize:(const CKComponentSize*)arg2 relativeToParentSize:(CGSize)arg3 ;
-(id)initWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 ;
-(void)_relinquishMountedView;
-(id)nextResponderAfterController;
-(UIView *)rootComponentMountedView;
-(const CKComponentViewConfiguration*)viewConfiguration;
-(BOOL)shouldMemoizeLayout;
-(void)setRootComponentMountedView:(UIView *)arg1 ;
-(CKComponentSize)size;
-(void)dealloc;
-(id)init;
-(id)nextResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)controller;
-(id)debugQuickLookObject;
@end

