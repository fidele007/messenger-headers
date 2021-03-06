/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNMessageReactionsActionModel : FBValueObject <NSCopying> {

	NSArray* _reactions;
	unsigned long long _selectedReactionIndex;

}

@property (nonatomic,copy,readonly) NSArray * reactions;                              //@synthesize reactions=_reactions - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedReactionIndex;              //@synthesize selectedReactionIndex=_selectedReactionIndex - In the implementation block
-(NSArray *)reactions;
-(unsigned long long)selectedReactionIndex;
-(id)initWithReactions:(id)arg1 selectedReactionIndex:(unsigned long long)arg2 ;
@end

