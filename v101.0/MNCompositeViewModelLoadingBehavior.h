/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCompositeViewModelLoading, MNViewModelUpdateBackfeeding;
@class NSString, NSArray;

@interface MNCompositeViewModelLoadingBehavior : NSObject {

	NSString* _kind;
	long long _importance;
	id<MNCompositeViewModelLoading> _loader;
	id<MNViewModelUpdateBackfeeding> _backfeeder;
	NSArray* _childBehaviors;

}

@property (nonatomic,copy,readonly) NSString * kind;                                     //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) long long importance;                                     //@synthesize importance=_importance - In the implementation block
@property (nonatomic,readonly) id<MNCompositeViewModelLoading> loader;                   //@synthesize loader=_loader - In the implementation block
@property (nonatomic,readonly) id<MNViewModelUpdateBackfeeding> backfeeder;              //@synthesize backfeeder=_backfeeder - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childBehaviors;                            //@synthesize childBehaviors=_childBehaviors - In the implementation block
-(id)initWithKind:(id)arg1 importance:(long long)arg2 loader:(id)arg3 backfeeder:(id)arg4 childBehaviors:(id)arg5 ;
-(id<MNViewModelUpdateBackfeeding>)backfeeder;
-(NSString *)kind;
-(NSArray *)childBehaviors;
-(long long)importance;
-(id<MNCompositeViewModelLoading>)loader;
@end

