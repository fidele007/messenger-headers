/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBQuicksilverMatchupViewModel : FBValueObject <NSCopying> {

	NSArray* _existingMatchups;
	NSArray* _suggestedMatchups;

}

@property (nonatomic,copy,readonly) NSArray * existingMatchups;               //@synthesize existingMatchups=_existingMatchups - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestedMatchups;              //@synthesize suggestedMatchups=_suggestedMatchups - In the implementation block
-(NSArray *)existingMatchups;
-(NSArray *)suggestedMatchups;
-(id)initWithExistingMatchups:(id)arg1 suggestedMatchups:(id)arg2 ;
@end

