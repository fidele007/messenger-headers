/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface FBPaymentsCardActionGroup : NSObject {

	NSArray* _actions;
	NSString* _actionGroupDescrption;

}

@property (nonatomic,copy,readonly) NSArray * actions;                             //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionGroupDescrption;              //@synthesize actionGroupDescrption=_actionGroupDescrption - In the implementation block
-(id)initWithActions:(id)arg1 description:(id)arg2 ;
-(id)visibleActionsForCard:(id)arg1 ;
-(NSString *)actionGroupDescrption;
-(NSArray *)actions;
@end

