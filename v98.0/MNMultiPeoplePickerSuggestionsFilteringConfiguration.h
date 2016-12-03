/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNMultiPeoplePickerSuggestionsFilteringConfiguration : FBValueObject <NSCopying> {

	NSArray* _suggestionsFilteringSegmentTitles;
	long long _suggestionsFilteringSegmentSelectedSegmentIndex;

}

@property (nonatomic,copy,readonly) NSArray * suggestionsFilteringSegmentTitles;                       //@synthesize suggestionsFilteringSegmentTitles=_suggestionsFilteringSegmentTitles - In the implementation block
@property (nonatomic,readonly) long long suggestionsFilteringSegmentSelectedSegmentIndex;              //@synthesize suggestionsFilteringSegmentSelectedSegmentIndex=_suggestionsFilteringSegmentSelectedSegmentIndex - In the implementation block
-(id)initWithSuggestionsFilteringSegmentTitles:(id)arg1 suggestionsFilteringSegmentSelectedSegmentIndex:(long long)arg2 ;
-(NSArray *)suggestionsFilteringSegmentTitles;
-(long long)suggestionsFilteringSegmentSelectedSegmentIndex;
@end

