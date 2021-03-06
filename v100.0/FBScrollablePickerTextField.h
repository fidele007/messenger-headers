/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextField.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class NSArray, FBStringSelectorItem, UIBarButtonItem, NSString;

@interface FBScrollablePickerTextField : UITextField <UIPickerViewDelegate, UIPickerViewDataSource> {

	NSArray* _items;
	FBStringSelectorItem* _pickedItem;
	UIBarButtonItem* _doneButton;

}

@property (nonatomic,copy) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) FBStringSelectorItem * pickedItem;              //@synthesize pickedItem=_pickedItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                          //@synthesize doneButton=_doneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBStringSelectorItem *)pickedItem;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
@end

