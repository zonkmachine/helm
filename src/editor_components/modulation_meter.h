/* Copyright 2013-2015 Matt Tytel
 *
 * twytch is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * twytch is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with twytch.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MODULATIONS_METER_H
#define MODULATIONS_METER_H

#include "JuceHeader.h"
#include "processor.h"

class ModulationMeter : public Component {
public:
    ModulationMeter(const mopo::Processor* modulation_total, const Slider* slider);
    ~ModulationMeter();
    
    void paint(Graphics& g) override;
  
    void update();

private:
    void drawSlider(Graphics& g);
    void drawKnob(Graphics& g);

    const mopo::Processor* modulation_total_;
    const Slider* destination_;

    float current_percent_;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ModulationMeter)
};

#endif // MODULATIONS_METER_H