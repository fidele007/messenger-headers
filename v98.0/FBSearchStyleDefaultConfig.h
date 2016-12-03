/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSearchStyleConfig.h>

@class UIColor, FBUserSession, NSString;

@interface FBSearchStyleDefaultConfig : NSObject <FBSearchStyleConfig> {

	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL popoverTypeaheadHasAnimation; 
@property (nonatomic,readonly) double popoverTypeaheadAttachmentPointVerticalOffset; 
@property (nonatomic,readonly) UIColor * sectionHeaderBackgroundColor; 
@property (nonatomic,readonly) UIEdgeInsets insets; 
@property (nonatomic,readonly) BOOL showSuggestionSeparator; 
@property (nonatomic,readonly) UIEdgeInsets suggestionTextInsets; 
@property (nonatomic,readonly) FBLayout suggestionSearchIconLayout; 
@property (nonatomic,readonly) FBLayout suggestionNullStateRecentSearchThumbnailLayout; 
@property (nonatomic,readonly) FBLayout suggestionPhotoSnippetLayout; 
@property (nonatomic,readonly) FBLayout suggestionPhotoSkittleLayout; 
-(double)suggestionRowHeight:(unsigned long long)arg1 ;
-(FBLayout)suggestionThumbnailLayout:(unsigned long long)arg1 ;
-(FBLayout)suggestionGroupIconLayout:(unsigned long long)arg1 ;
-(double)suggestionVerifiedBadgeVerticalMargin:(unsigned long long)arg1 ;
-(BOOL)popoverTypeaheadHasAnimation;
-(double)popoverTypeaheadAttachmentPointVerticalOffset;
-(BOOL)showSuggestionSeparator;
-(UIEdgeInsets)suggestionTextInsets;
-(FBLayout)suggestionSearchIconLayout;
-(FBLayout)suggestionNullStateRecentSearchThumbnailLayout;
-(FBLayout)suggestionPhotoSnippetLayout;
-(FBLayout)suggestionPhotoSkittleLayout;
-(UIColor *)sectionHeaderBackgroundColor;
-(UIEdgeInsets)insets;
-(id)initWithSession:(id)arg1 ;
@end
