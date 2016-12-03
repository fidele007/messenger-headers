/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBClock;
#import <Messenger/Messenger-Structs.h>
@class NSCalendar, NSDateFormatter, FBLocalizedDateFormats;

@interface FBDateStringFormatter : NSObject {

	NSCalendar* _calendar;
	NSDateFormatter* _dateFormatter;
	recursive_mutex _lock;
	FBLocalizedDateFormats* _localizedDateFormats;
	id<FBClock> _clock;

}
+(id)sharedFormatter;
-(id)stringFromDate:(id)arg1 behavior:(int)arg2 ;
-(id)initWithClock:(id)arg1 ;
-(void)localizedDateFormatsChanged:(id)arg1 ;
-(id)_dateAndTimeStringFromDate:(id)arg1 ;
-(id)_dayAndDateWithoutYearAndTimeStringFromDate:(id)arg1 ;
-(id)_dateStringFromDate:(id)arg1 includeDayInAdditionToDate:(BOOL)arg2 ;
-(id)_timeStringFromDate:(id)arg1 ;
-(id)_dateWithoutYearStringFromDate:(id)arg1 ;
-(id)_dateWithoutYearAndTimeStringFromDate:(id)arg1 ;
-(id)_dateStringTodayTomorrowOrMonthDay:(id)arg1 ;
-(id)_monthAndYearStringFromDate:(id)arg1 ;
-(id)_yearStringFormatDate:(id)arg1 ;
-(id)_stringFromPastDateOnlyRelativeForToday:(id)arg1 ;
-(id)_stringFromPastDateOnlyTimeForToday:(id)arg1 ;
-(id)_stringFromPastDateAbbreviatedWithEditorialMonthNames:(id)arg1 ;
-(id)_stringFromPastDateAbbreviatedForTodayOnly:(id)arg1 ;
-(id)_stringFromPastDateAbbreviated:(id)arg1 ;
-(id)_stringFromPastDateExtraAbbreviated:(id)arg1 ;
-(id)_stringFromPastDate:(id)arg1 ;
-(id)_stringFromFutureDate:(id)arg1 ;
-(id)_stringFromPastDateWithoutTime:(id)arg1 ;
-(id)_stringFromFutureDateWithoutTime:(id)arg1 ;
-(id)_stringFromPastDateWithSeconds:(id)arg1 ;
-(id)_stringFromDate:(id)arg1 template:(id)arg2 ;
-(id)_dayOfMonthStringFromDate:(id)arg1 ;
-(id)_monthAbbrvStringFromDate:(id)arg1 ;
-(id)_monthFromDate:(id)arg1 ;
-(id)_dayStringFromDate:(id)arg1 ;
-(void)overrideLocale:(id)arg1 ;
-(id)abbreviatedRelativeStringFromPastDate:(id)arg1 accessibleString:(id*)arg2 ;
-(id)abbreviatedRelativeStringIfTodayFromPastDate:(id)arg1 accessibleString:(id*)arg2 ;
-(id)extraAbbreviatedRelativeStringFromPastDate:(id)arg1 accessibleString:(id*)arg2 ;
-(void)dealloc;
@end

