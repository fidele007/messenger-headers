/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNPeoplePickerSearchBarViewConfiguration : FBValueObject <NSCopying> {

	BOOL _forceShowStatusBarBackgroundViewForSuggestions;
	UIColor* _activeSearchBarTintColor;
	UIColor* _activeSearchBarBackgroundColor;
	UIColor* _statusBarBackgroundViewColorOverride;

}

@property (nonatomic,copy,readonly) UIColor * activeSearchBarTintColor;                          //@synthesize activeSearchBarTintColor=_activeSearchBarTintColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * activeSearchBarBackgroundColor;                    //@synthesize activeSearchBarBackgroundColor=_activeSearchBarBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL forceShowStatusBarBackgroundViewForSuggestions;              //@synthesize forceShowStatusBarBackgroundViewForSuggestions=_forceShowStatusBarBackgroundViewForSuggestions - In the implementation block
@property (nonatomic,copy,readonly) UIColor * statusBarBackgroundViewColorOverride;              //@synthesize statusBarBackgroundViewColorOverride=_statusBarBackgroundViewColorOverride - In the implementation block
-(id)initWithActiveSearchBarTintColor:(id)arg1 activeSearchBarBackgroundColor:(id)arg2 forceShowStatusBarBackgroundViewForSuggestions:(BOOL)arg3 statusBarBackgroundViewColorOverride:(id)arg4 ;
-(BOOL)forceShowStatusBarBackgroundViewForSuggestions;
-(UIColor *)activeSearchBarTintColor;
-(UIColor *)activeSearchBarBackgroundColor;
-(UIColor *)statusBarBackgroundViewColorOverride;
@end
