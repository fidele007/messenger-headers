/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <Messenger/CKComponentStateListener.h>

@protocol CKComponentSizeRangeProviding, FBComponentHostingNodeDelegate;
@class CKComponent, ASDisplayNode, NSValue, NSSet, NSString;

@interface FBComponentHostingNode : ASDisplayNode <CKComponentStateListener> {

	Class _componentProvider;
	id<CKComponentSizeRangeProviding> _sizeRangeProvider;
	CKComponent* _component;
	ASDisplayNode* _containerNode;
	NSValue* _constrainedSize;
	CKComponentLayout* _cachedLayout;
	CKComponentLayout* _mountedLayout;
	NSSet* _mountedComponents;
	unsigned long long _requestedUpdateMode;
	CKComponentHostingViewInputs* _pendingInputs;
	BOOL _componentNeedsUpdate;
	BOOL _scheduledAsynchronousComponentUpdate;
	BOOL _isSynchronouslyUpdatingComponent;
	id<FBComponentHostingNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComponentHostingNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(id)initWithComponentProvider:(Class)arg1 sizeRangeProvider:(id)arg2 ;
-(void)updateModel:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)updateContext:(id)arg1 mode:(unsigned long long)arg2 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_updateComponent;
-(void)_mountCachedComponent;
-(void)_computeAndCacheComponentLayout;
-(void)_setNeedsUpdateWithMode:(unsigned long long)arg1 ;
-(void)_asynchronouslyUpdateComponentIfNeeded;
-(void)_synchronouslyUpdateComponentIfNeeded;
-(void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(/*^block*/id)arg3 mode:(unsigned long long)arg4 ;
-(void)setDelegate:(id<FBComponentHostingNodeDelegate>)arg1 ;
-(void)dealloc;
-(id<FBComponentHostingNodeDelegate>)delegate;
-(void)layout;
-(void)_invalidateLayout;
@end
