/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface FBLeadGenCustomDisclaimerState : NSObject <NSCopying> {

	BOOL _hasSeenAllContent;
	NSMutableArray* _checkboxesState;

}

@property (nonatomic,copy) NSMutableArray * checkboxesState;              //@synthesize checkboxesState=_checkboxesState - In the implementation block
@property (assign,nonatomic) BOOL hasSeenAllContent;                      //@synthesize hasSeenAllContent=_hasSeenAllContent - In the implementation block
-(void)setCheckboxesState:(NSMutableArray *)arg1 ;
-(void)setHasSeenAllContent:(BOOL)arg1 ;
-(NSMutableArray *)checkboxesState;
-(BOOL)hasSeenAllContent;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

