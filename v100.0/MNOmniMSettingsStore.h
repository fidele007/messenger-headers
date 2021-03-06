/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class MNOmnistoreUserPrefsStore, MNOmniMSettingsListenerAnnouncer, NSString;

@interface MNOmniMSettingsStore : NSObject <FBViewerContextClassProvidable> {

	MNOmnistoreUserPrefsStore* _omnistoreUserPrefsStore;
	MNOmniMSettingsListenerAnnouncer* _settingsAnnouncer;

}

@property (assign,nonatomic) long long suggestionMode; 
@property (assign,nonatomic) BOOL suggestionEnabled; 
@property (assign,nonatomic) unsigned long long ridesPref; 
@property (assign,nonatomic) BOOL rideSuggestionsEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(long long)suggestionMode;
-(void)setSuggestionMode:(long long)arg1 ;
-(BOOL)suggestionEnabled;
-(unsigned long long)ridesPref;
-(BOOL)rideSuggestionsEnabled;
-(void)setRideSuggestionsEnabled:(BOOL)arg1 ;
-(void)setSuggestionEnabled:(BOOL)arg1 ;
-(void)setRidesPref:(unsigned long long)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

