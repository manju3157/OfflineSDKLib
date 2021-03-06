//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Player/Xml/IntermediateControls/XmlInterCategories.java
//
//  Created by ashchauhan on 4/1/14.
//

//#ifndef _OnePointPlayerXmlIntermediateControlsXmlInterCategories_H_
//#define _OnePointPlayerXmlIntermediateControlsXmlInterCategories_H_

@protocol IXmlInterControl;


#import "XmlInterControl.h"
#import "XmlInterCategory.h"
#import "ICategories.h"
@interface XmlInterCategories : XmlInterControl {
 @public
  int row_;
  int column_;
  BOOL isCode_;
  int categoryType;
    BOOL includeLabel;
    int tableType;
    XmlControlMapper *subListMapper;
    int codePointer;
    int backupType;
}

- (id)initWithIXmlInterControl:(id<IXmlInterControl>)parent withIQuestion:(id<IQuestion>)question;
- (id)initWithIXmlInterControl:(id<IXmlInterControl>)parent withICategory:(id<ICategories>)categories withICategory:(id<ICategories>)codes;
- (void)addRow:(id<ICategory>)category;
- (void)addCell:(id<ICategory>)category;
- (void)addCategory:(id<ICategory>)category;
-(void)AddCell:(id<IQuestion>)question;
- (void)addRow:(id<ICategory>)category withBool:(BOOL)isHeading;
-(void)row:(BOOL)isHeading;
@end

