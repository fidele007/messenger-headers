/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSOrderedSet;

@interface MNGroupsTableViewConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowSectionHeaders;
	BOOL _shoulsShowSeeAllRow;
	NSDictionary* _maxNumberOfRowsBySection;
	NSOrderedSet* _orderedSections;

}

@property (nonatomic,copy,readonly) NSDictionary * maxNumberOfRowsBySection;              //@synthesize maxNumberOfRowsBySection=_maxNumberOfRowsBySection - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * orderedSections;                       //@synthesize orderedSections=_orderedSections - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSectionHeaders;                             //@synthesize shouldShowSectionHeaders=_shouldShowSectionHeaders - In the implementation block
@property (nonatomic,readonly) BOOL shoulsShowSeeAllRow;                                  //@synthesize shoulsShowSeeAllRow=_shoulsShowSeeAllRow - In the implementation block
-(id)initWithMaxNumberOfRowsBySection:(id)arg1 orderedSections:(id)arg2 shouldShowSectionHeaders:(BOOL)arg3 shoulsShowSeeAllRow:(BOOL)arg4 ;
-(NSOrderedSet *)orderedSections;
-(NSDictionary *)maxNumberOfRowsBySection;
-(BOOL)shouldShowSectionHeaders;
-(BOOL)shoulsShowSeeAllRow;
@end

