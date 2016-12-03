/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPeopleTabStringConfiguration : FBValueObject <NSCopying> {

	NSString* _topSectionHeaderString;
	NSString* _activePeopleSectionHeaderString;
	NSString* _contactsListSegmentedControlString;
	NSString* _peopleTabTitleString;

}

@property (nonatomic,copy,readonly) NSString * topSectionHeaderString;                          //@synthesize topSectionHeaderString=_topSectionHeaderString - In the implementation block
@property (nonatomic,copy,readonly) NSString * activePeopleSectionHeaderString;                 //@synthesize activePeopleSectionHeaderString=_activePeopleSectionHeaderString - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactsListSegmentedControlString;              //@synthesize contactsListSegmentedControlString=_contactsListSegmentedControlString - In the implementation block
@property (nonatomic,copy,readonly) NSString * peopleTabTitleString;                            //@synthesize peopleTabTitleString=_peopleTabTitleString - In the implementation block
-(NSString *)peopleTabTitleString;
-(NSString *)topSectionHeaderString;
-(NSString *)activePeopleSectionHeaderString;
-(id)initWithTopSectionHeaderString:(id)arg1 activePeopleSectionHeaderString:(id)arg2 contactsListSegmentedControlString:(id)arg3 peopleTabTitleString:(id)arg4 ;
-(NSString *)contactsListSegmentedControlString;
@end

