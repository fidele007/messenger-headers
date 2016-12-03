/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsSimpleFormViewControllerDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsEventAnnouncing.h>
#import <Messenger/FBPaymentsTableViewSection.h>

@protocol FBPaymentsTableViewSectionDelegate, FBPaymentsNavigationDelegate, FBPaymentsOptionsTableViewSectionDelegate;
@class FBPaymentsSimpleFormViewController, FBPaymentsEventListenerAnnouncer, FBPaymentsCheckoutOptionCategory, NSArray, NSString;

@interface FBPaymentsOptionsTableViewSection : NSObject <FBPaymentsSimpleFormViewControllerDelegate, FBPaymentsEventListener, FBPaymentsEventAnnouncing, FBPaymentsTableViewSection> {

	FBPaymentsSimpleFormViewController* _formViewController;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	BOOL _shouldDisplayPriceWithTitle;
	id<FBPaymentsTableViewSectionDelegate> _sectionDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBPaymentsOptionsTableViewSectionDelegate> _delegate;
	FBPaymentsCheckoutOptionCategory* _optionCategory;
	NSArray* _selectedOptions;
	NSArray* _customizedOptions;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic,__weak) id<FBPaymentsOptionsTableViewSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBPaymentsCheckoutOptionCategory * optionCategory;                            //@synthesize optionCategory=_optionCategory - In the implementation block
@property (nonatomic,copy) NSArray * selectedOptions;                                                    //@synthesize selectedOptions=_selectedOptions - In the implementation block
@property (nonatomic,copy) NSArray * customizedOptions;                                                  //@synthesize customizedOptions=_customizedOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayPriceWithTitle;                                           //@synthesize shouldDisplayPriceWithTitle=_shouldDisplayPriceWithTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                    //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsTableViewSectionDelegate> sectionDelegate;              //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                 //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
+(id)announcerIdentifier;
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1 ;
-(void)_onCancel;
-(void)handleSelectActionForRowAtIndex:(unsigned long long)arg1 ;
-(id)sectionHeaderViewModel;
-(id)cellForSectionRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForSectionRowAtIndex:(unsigned long long)arg1 ;
-(void)setSelectedOptions:(NSArray *)arg1 ;
-(void)setOptionCategory:(FBPaymentsCheckoutOptionCategory *)arg1 ;
-(void)setCustomizedOptions:(NSArray *)arg1 ;
-(void)setShouldDisplayPriceWithTitle:(BOOL)arg1 ;
-(FBPaymentsCheckoutOptionCategory *)optionCategory;
-(void)simpleFormViewControllerDidUpdateForm:(id)arg1 ;
-(void)simpleFormViewControllerDidSelectLabelButton:(id)arg1 ;
-(id)headerViewForSimpleFormViewController:(id)arg1 ;
-(void)_updateOptionCategory:(id)arg1 ;
-(void)_updateSelectedOptions:(id)arg1 ;
-(void)_handleSelectionOnOption:(id)arg1 ;
-(void)_presentCustomOptionViewController;
-(void)_onAdd;
-(void)_addCustomizedOption:(id)arg1 ;
-(NSArray *)customizedOptions;
-(BOOL)shouldDisplayPriceWithTitle;
-(NSArray *)selectedOptions;
-(void)setDelegate:(id<FBPaymentsOptionsTableViewSectionDelegate>)arg1 ;
-(id)init;
-(id<FBPaymentsOptionsTableViewSectionDelegate>)delegate;
-(UIEdgeInsets)edgeInsets;
-(unsigned long long)numberOfRows;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(void)setSectionDelegate:(id<FBPaymentsTableViewSectionDelegate>)arg1 ;
-(id<FBPaymentsTableViewSectionDelegate>)sectionDelegate;
@end

